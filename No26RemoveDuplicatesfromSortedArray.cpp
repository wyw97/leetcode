class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int len=1;
        int temp_num=0;
        vector<int>::iterator its=nums.begin();
        
        temp_num=*its;
        ++its;
        while(its!=nums.end()){
            if( (*its) == temp_num ){
                its=nums.erase(its);
                //++its;
                continue;
            }
            temp_num = (*its);
            ++len;
            ++its;
        }
        return len;
    }
};
