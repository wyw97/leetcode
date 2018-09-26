class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        vector<int>::iterator its=nums.begin();
        int word=*its;
        ++its;
        while(its!=nums.end()){
            word^=*its;
            ++its;
        }
        return word;
    }
};
