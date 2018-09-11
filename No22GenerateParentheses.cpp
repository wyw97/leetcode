class Solution {
public:
    void Recur(int n,int Left,int Right,string S,vector<string>& V){
        if(Left<Right){
            return;
        }
        else if(Left==Right&&Left==n){
            V.push_back(S);
            return;
        }
        else if(Left==n&&Right<Left){
            S.push_back(')');
            Recur(n,Left,Right+1,S,V);
        }
        else if(Left==Right){
            S.push_back('(');
            Recur(n,Left+1,Right,S,V);
        }
        else{
            S.push_back('(');
            Recur(n,Left+1,Right,S,V);
            string::iterator its=S.end();
            its--;
            S.erase(its);
            S.push_back(')');
            Recur(n,Left,Right+1,S,V);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> Ans;
        string S="";
        Recur(n,0,0,S,Ans);
        return Ans;
    }
};
