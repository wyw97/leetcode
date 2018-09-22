// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        int num=0;
        do{
            num=7*(rand7()-1)+rand7();
        }while(num>40);
        return num%10+1;
        
    }
};

//思路就是采用ran7()生成一组均匀的数，然后取前40即可啊。
