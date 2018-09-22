class Solution {
public:
    string convertToBase7(int num) {
        string Ans;
        bool minus=false;
        if(num<0){
            minus=true;
            num=-num;
        }
        while(num>=7){
            int Res=num%7;
            Ans.push_back(char('0'+Res));
            num/=7;
        }
        Ans.push_back(char('0'+num));
        
        if(minus) Ans.push_back('-');
        reverse(Ans.begin(),Ans.end());
        return Ans;
    }
};
