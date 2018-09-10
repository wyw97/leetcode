class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> Ans;
        int L=sqrt(area);
        if(area==L*L){
            Ans.push_back(L);
            Ans.push_back(L);
        }
        else{
            for(int i=L+1;i<=area;i++){
                if(area%i==0){
                    Ans.push_back(i);
                    Ans.push_back(area/i);
                    break;
                }
            }
        }
        return Ans;
    }
};
