class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        if(s==" "||s.length()==1) return 1;
        map<int,int>Dic;
        map<int,int>::iterator its;
        int len_s=s.length();
        int lst_pos=-1;
        int max_len=0;
        for(int i=0;i<len_s;i++){
            char c=s.substr(i,1).c_str()[0];
            its=Dic.begin();
            its=Dic.find(c-'a');
            if(its!=Dic.end()){
                max_len=max(max_len,i-max(lst_pos,Dic[c-'a']));
                lst_pos=max(lst_pos,Dic[c-'a']);
                Dic[c-'a']=i;
            }
            else{
                max_len=max(max_len,i-lst_pos);
                Dic[c-'a']=i;
            }
        }
        return max_len;
    }
};
//就顺序遍历一次就好了
