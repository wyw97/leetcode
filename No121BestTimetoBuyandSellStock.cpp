class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        vector<int>::iterator its=prices.begin();
        int temp_min=*its;
        int minus=0;
        while(its!=prices.end()){
            if(*its<temp_min){
                temp_min=*its;
            }
            else{
                minus=max(*its-temp_min,minus);
            }
            ++its;
        }
        return minus;
    }
};
