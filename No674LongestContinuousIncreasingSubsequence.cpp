class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.empty()) return 0;
        int max_cnt=1;
        int temp_cnt=1;
        vector<int>::iterator its=nums.begin();
        int temp_num=*its;
        ++its;
        while(its!=nums.end()){
            if(*its>temp_num){
                temp_cnt++;
                if(temp_cnt>=max_cnt){
                    max_cnt=temp_cnt;
                }
               
            }
            else{
                temp_cnt=1;
            }
            temp_num=*its;
            ++its;
        }
        return max_cnt;
    }
};
