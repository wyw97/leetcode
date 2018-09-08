class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>::iterator its1,its2,its;
        its=nums.begin();
        bool first=false;
        
        while(its!=nums.end()){
            if(first==false&&*its!=0){
                ++its;
                continue;
            }
            else if(first==false&&*its==0){
                first=true;
                its1=its;
                its2=its;
                ++its;
                continue;
            }
            else if(first==true&&*its==0){
                its2=its;
                ++its;
            }
            else if(first==true&&*its!=0){
                *its1=*its;
                *its=0;
                ++its1;
                ++its2;
                ++its;
                continue;
            }
        }
    }
};
