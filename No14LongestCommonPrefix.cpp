class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return string("");
        vector<string>::iterator its=strs.begin();
        
        int com=(*its).length();
        string lst=*its;
        ++its;
        while(its!=strs.end()){
            int len_str=(*its).length();
            for(int i=0;i<len_str&&i<com;i++){
                if(lst[i]!=(*its)[i]){
                    com=i;
                }
            }
            if(!com) return string("");
            lst=*(its);
            ++its;
        }
        string res=lst.substr(0,com);
        return res;
    }
};
//水题，直接找就好了
