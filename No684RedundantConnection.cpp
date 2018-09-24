class Solution {
public:
    int Fnd(int i,vector<int>& V){
        if(V[i]==i) return i;
        V[i]=Fnd(V[i],V);
        return V[i];
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int N = edges.size();
        vector<int> V;
        vector<int> Result;
        for(int i = 0;i<=N;i++){
            V.push_back(i);
        }
        for(int i=0;i<N;i++){
            vector<int>Temp = edges[i];
            int i1=Temp[0];
            int i2=Temp[1];
            int f1=Fnd(i1,V),f2=Fnd(i2,V);
            if(min(f1,f2)==V[max(f1,f2)]){
                Result.push_back(Temp[0]);
                Result.push_back(Temp[1]);
                break;
            }
            else V[max(f1,f2)]=min(f1,f2);
        }
        return Result;
    }
};
