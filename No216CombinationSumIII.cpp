class Solution {
public:
    void Recur(vector<vector<int> >&Ans,int k,int n,int Num,int Sum,int MiniNum,vector<int> V){
        if(Sum>n) return;
        if(Num==k){
            if(Sum==n){
                Ans.push_back(V);
                return;
            }
            else return;
        }
        else{
            for(int t=MiniNum+1;t<10;t++){
                V.push_back(t);
                Recur(Ans,k,n,Num+1,Sum+t,t,V);
                V.erase(V.begin()+Num);
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int> > Ans;
        vector<int> V;
        Recur(Ans,k,n,0,0,0,V);
        return Ans;
    }
};
