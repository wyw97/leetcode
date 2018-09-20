class Solution {
public:
    void Recur(vector<string>&Ans,string &S,string& digits,int pos,int len_digits){
        if(pos==len_digits){
            Ans.push_back(S);
            return;
        }
        vector<vector<char>>V={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},
                               {'t','u','v'},{'w','x','y','z'}};
        char c=digits[pos];
        //cout<<"C : "<<c<<endl;
        int Size=c-'2';
       // cout<<"Size: "<<Size<<endl;
        for(int i=0;i<V[Size].size();i++){
            S.push_back(V[Size][i]);
            Recur(Ans,S,digits,pos+1,len_digits);
            S.erase(pos);
        }
    }
    vector<string> letterCombinations(string digits) {
        
        vector<string> Ans;
        if(digits.empty()) return Ans;
        string S="";
        Recur(Ans,S,digits,0,digits.length());
        return Ans;
    }
};
