class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> V;
        bool flag = true;
        for(int i=0;i<len && flag;i++){
            for(int j=i+1;j<len && flag;j++){
                if(nums[i]+nums[j]==target){
                    V.push_back(i);
                    V.push_back(j);
                    flag=false;
                }
            }
        }
        return V;
    }
};
//暴力枚举了，其实可以用hash table降低时间复杂度的.
