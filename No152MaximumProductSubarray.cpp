class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int imax = 1, imin = 1, tot_max = nums[0];
        int lens = nums.size();
        for(int i = 0; i < lens; ++i){
            if(nums[i]<0){
                int tmp = imax;
                imax = imin;
                imin = tmp;
            }
            imax = max(imax*nums[i],nums[i]);
            imin = min(imin*nums[i],nums[i]);
            tot_max = max(tot_max, imax);
        }
        return tot_max;
    }
};
/*
乘积最大子序列
找到包含当前的最大最小值，然后加进来就可以，注意正负。

*/
