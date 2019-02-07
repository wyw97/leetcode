class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int size_n = nums.size();
        if(size_n == 0) return 0;
        sort(nums.begin(),nums.end());
        int n1 = nums[0]*nums[1]*nums[size_n-1];
        int n2 = nums[size_n-3]*nums[size_n-2]*nums[size_n-1];
        return max(n1,n2);
        
    }
};
/*
Given an integer array, find three numbers whose product is maximum and output the maximum product.
可能情况为三正\一正两（最大）负
*/
