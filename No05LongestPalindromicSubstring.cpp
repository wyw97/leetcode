class Solution {
//判断回文
public:
    string longestPalindrome(string s) {
        int is_hw[1005][1005]={0};
        int len_s=s.length();
        int max_begin=0;
        int max_len=1;
        for(int len=1;len<=len_s;len++){
            for(int beg=0;beg<len_s;beg++){
                if(beg+len-1>=len_s){
                    break;
                }
                if(len==1){
                    is_hw[beg][beg]=1;
                    
                }
                else if(len==2){
                    if(s[beg]==s[beg+1]){
                        is_hw[beg][beg+1]=1;
                        if(len>max_len){
                            max_len=len;
                            max_begin=beg;
                        }
                    }
                }
                else{
                    if(s[beg]==s[beg+len-1] && is_hw[beg+1][beg+len-2]){
                        is_hw[beg][beg+len-1]=1;
                        if(len>max_len){
                            max_len=len;
                            max_begin=beg;
                        }
                    }
                }
            }
        }
        /*
        for(int i=0;i<len_s;i++){
            for(int j=0;j<len_s;j++){
                cout<<is_hw[i][j]<<' ';
            }
            cout<<endl;
        }
        */
        return s.substr(max_begin,max_len);
    }
};
