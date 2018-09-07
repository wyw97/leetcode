class Solution {
public:
    string reverseVowels(string s) {
        int len=s.length();
        stack<char>Dic;
        queue<int> Pos;
        for(int i=0;i<len;i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u'){
                Dic.push(s[i]);
                Pos.push(i);
            }
        }
        while(!Dic.empty()){
            int pos=Pos.front();
            Pos.pop();
            char c=Dic.top();
            Dic.pop();
            s[pos]=c;
        }
        return s;
    }
};
