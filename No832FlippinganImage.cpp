class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> V;
        int size_a = A.size();
        for(int i = 0; i < size_a; ++i){
            int len_a = A[i].size();
            vector<int>::reverse_iterator its = A[i].rbegin();
            vector<int> Layer;
            while(its != A[i].rend()){
                Layer.push_back(1-*its);
                ++its;
            }
            V.push_back(Layer);
        }
        return V;
    }
};
/*
简单题 无话可说
*/
