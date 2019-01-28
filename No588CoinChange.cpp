class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> Cnt(amount+1);
        int len_c = coins.size();
        Cnt[0] = 1;
        for(int i = 0; i < len_c; ++i){
            int temp_coin = coins[i];
            for(int j = 0; j + temp_coin <= amount; j++){
                Cnt[j+temp_coin] += Cnt[j];
            }
        }
        return Cnt[amount];
    }
};

/*
  动态规划问题;
  Cnt[0] = 1;//最便宜的一个硬币一定可以买一个对应价钱的
  Cnt[i + temp_coin] += Cnt[i];
  /*
  价格为i + temp_coin的金币 一定可以由i + temp_coin构成，且temp_coin按照从小到大的顺序
  保证了一定符合要求
  */


*/
