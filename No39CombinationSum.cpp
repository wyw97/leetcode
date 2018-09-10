class Solution {
public:
    void Recur(vector<vector<int>>& Ans,int target,vector<int>& candidates,vector<int> V,int Index,int Sum){
        if(Sum>target) return;
        else if(Sum==target){
            Ans.push_back(V);
            return;
        }
        else{
            int Size=candidates.size();
            for(int t=Index;t<Size;t++){
                V.push_back(candidates[t]);
                Recur(Ans,target,candidates,V,t,Sum+candidates[t]);
                V.erase(V.begin()+V.size()-1);
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> Ans;
        vector<int> V;
        Recur(Ans,target,candidates,V,0,0);
        return Ans;
    }
};
