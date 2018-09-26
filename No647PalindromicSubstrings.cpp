class Solution {
public:
    int countSubstrings(string s) {
        int cnt[1005][1005]={0};
        int len_s=s.length();
        int cnt_sum=0;
        for(int t=1;t<=len_s;t++){
            for(int i=0;i<len_s;i++){
                if(i+t-1>=len_s) break;
                if(t==1){
                    cnt[i][i]=1;
                    cnt_sum++;
                }
                else if(t==2){
                    if(s[i]==s[i+1]){
                        cnt[i][i+1]=1;
                        cnt_sum++;
                    }
                }
                else{
                    if(cnt[i+1][i+t-2]==1&&s[i]==s[i+t-1]){
                        cnt[i][i+t-1]=1;
                        cnt_sum++;
                    }
                }
            }
        }
        return cnt_sum;
    }
};
