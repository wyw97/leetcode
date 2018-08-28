class Solution {
public:
    int reverse(int x) {
       bool minus=false;
       bool exceed=false;
       long long int max_int=0x7fffffff;
       if(!x) return 0;
       if(x<0) {
           minus=true;
           x=-x;
       }
       long long int abs_x=0;
       while(x>0){
           abs_x=abs_x*10+(x%10);
           if(abs_x>max_int){
               exceed=true;
               break;
           }
           x/=10;
       }
       if(exceed) return 0;
       if(minus==true) return -1*(int)abs_x;
       else return (int)abs_x;
    }
};
//就直接反着计算就好了，问题在于对于超过int范围的特判
