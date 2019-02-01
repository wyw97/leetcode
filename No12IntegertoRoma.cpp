class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int Digit[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string Sig[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i = 0; i < 13; ++i){
            while(num >= Digit[i]){
                ans += Sig[i];
                num -= Digit[i];
            }
        }
        return ans;
    }
};
/*
    执行用时: 28 ms, 在Integer to Roman的C++提交中击败了98.17% 的用户
    考虑所有情况吧，类似枚举

*/
