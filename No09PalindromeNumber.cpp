//差不多是速度最快的一次了，实在无聊
class Solution {
public:
    int converse_int(int x){
        int con_x=0;
        while(x>0){
            con_x=con_x*10+x%10;
            x=x/10;
        }
        return con_x;
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        int con_x=converse_int(x);
        if(con_x==x) return true;
        else return false;
    }
};
