//Stack 存储即可
class Solution {
public:
    bool isValid(string s) {
        
        stack<char> Dic;
        int len=s.length();
        if(!len) return true;
        for(int i=0;i<len;i++){
            if(s.substr(i,1)=="("){
                Dic.push('(');
            }
            else if(s.substr(i,1)=="["){
                Dic.push('[');
            }
            else if(s.substr(i,1)=="{"){
                Dic.push('{');
            }
            else if(s.substr(i,1)==")"){
                if(Dic.empty()) return false;
                char p=Dic.top();
                Dic.pop();
                if(p!='(') return false;
            }
            else if(s.substr(i,1)=="]"){
                if(Dic.empty()) return false;
                char p=Dic.top();
                Dic.pop();
                if(p!='[') return false;
            }
            else if(s.substr(i,1)=="}"){
                if(Dic.empty()) return false;
                char p=Dic.top();
                Dic.pop();
                if(p!='{') return false;
            }
        }
        if(Dic.empty()) return true;
        else return false;
    }
};
