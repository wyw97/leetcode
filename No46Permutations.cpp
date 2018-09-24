class Solution {
public:
    void Permutation(vector<vector<int>>&Ans,vector<int>& nums,int Size,int index_){
        if(index_==Size-1){
            Ans.push_back(nums);
            return;
        }
        for(int t=index_;t<Size;t++){
            swap(nums[t],nums[index_]);
            Permutation(Ans,nums,Size,index_+1);
            swap(nums[t],nums[index_]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> Ans;
        Permutation(Ans,nums,nums.size(),0);
        return Ans;
    }
};
