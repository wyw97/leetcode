class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> Set;
        set<int>::iterator s_its;
        vector<int>::iterator its=nums.begin();
        while(its!=nums.end()){
            int temp=*its;
            s_its=Set.find(temp);
            if(s_its!=Set.end()) return true;
            Set.insert(temp);
            ++its;
        }
        return false;
    }
};
