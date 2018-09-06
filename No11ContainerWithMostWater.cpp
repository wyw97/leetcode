class Solution {
public:
    int maxArea(vector<int>& height) {
        int len=height.size();
        int left=0,right=len-1;
        int max_size=(right-left)*min(height[left],height[right]);
        while(left<right){
            if(height[left]<height[right]) ++left;
            else --right;
            max_size=max(max_size,(right-left)*min(height[left],height[right]));
        }
        return max_size;
    }
};
/*
这道题可以考虑把n^2时间复杂度降低到n时间复杂度，在两边同时考虑即可。
*/
