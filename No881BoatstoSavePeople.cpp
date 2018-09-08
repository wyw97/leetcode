class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int cnt_ship=0;
        int len=people.size();
        int cnt_num[30005]={0};
        vector<int>::iterator its=people.begin();
        while(its!=people.end()){
            cnt_num[*its]++;
            ++its;
        }
        int temp_cnt=limit;
        while(len>0&&temp_cnt>0){
            if(cnt_num[temp_cnt]==0){
                --temp_cnt;
                
            }
            else{
            //cout<<temp_cnt;
            cnt_ship++;
            cnt_num[temp_cnt]--;
            --len;
            int max_left=min(limit-temp_cnt,temp_cnt);
            for(int t=max_left;t>0;--t){
                if(cnt_num[t]){
                  //  cout<<" "<<t;
                    --cnt_num[t];
                    --len;
                    break;
                }
            }
         // cout<<endl;  
            }
        }
        return cnt_ship;
    }
};
