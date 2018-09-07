class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxn=0,sumn=0;
        vector<int>::iterator its=nums.begin();
        vector<int>::iterator tops=nums.begin();
        for(int i=0;i<k;i++){
            sumn+=*its;
            ++its;
        }
        maxn=sumn;
        while(its!=nums.end()){
            sumn+=*its-*tops;
            maxn=max(maxn,sumn);
            ++tops;
            ++its;
        }
        return (double)maxn/(double)k;
    }
};
