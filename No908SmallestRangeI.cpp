class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        vector<int>::iterator its1=A.begin();
        int sml=*its1,lrg=*its1;
        ++its1;
        while(its1!=A.end()){
            sml=min(sml,*its1);
            lrg=max(lrg,*its1);
            ++its1;
        }
        if(lrg-sml<=2*K) return 0;
        else return lrg-sml-2*K;
    }
};
