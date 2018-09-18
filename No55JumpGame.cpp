class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.empty()||nums.size()==1) return true;
        vector<int>::iterator its=nums.begin();
        int size_nums=nums.size();
        int cnt=*its;
        int index_=0;
        int max_step=cnt;
        while(its!=nums.end()){
            ++its;
            ++index_;
            if(index_>max_step){
                return false;
            }
            cnt=*its;
            max_step=max(max_step,index_+cnt);
            
            if(max_step>=size_nums-1) return true;
        }
    }
};
