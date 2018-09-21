class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> Ans;
        int Size=nums.size();
        int Cate = 1<<Size;
        for(int i=0;i<Cate;i++){
            vector<int> Choose;
            for(int t=0;t<Size;t++){
                if((i>>t)&1==1){
                    Choose.push_back(nums[t]);
                }
            }
            Ans.push_back(Choose);
        }
        return Ans;
    }
};
