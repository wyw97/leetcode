public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        char Record[1005][1005];
        int len_s=s.length();
        for(int i=0;i<1005;i++){
            for(int j=0;j<1005;j++){
                Record[i][j]=' ';
            }
        }
        int li=0,lj=0,ls=0;
        const char* str=s.c_str();
        while(ls<len_s){
            Record[li][lj]=str[ls];
            ls++;
            if(lj%(numRows-1)==0){
                if(li==numRows-1){
                    li--;
                    lj++;
                }
                else{
                    li++;
                }
            }
            else{
                li--;
                lj++;
            }
        }
        string ans="";
        for(int i=0;i<len_s;i++){
            for(int j=0;j<len_s;j++){
                if(Record[i][j]!=' '){
                    ans=ans+Record[i][j];//ans.append(Record[i][j]);
                }
            }
        }
        return ans;
    }
};
