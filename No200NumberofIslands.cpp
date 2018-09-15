class Solution {
public:
    void Recur(vector<vector<char>>&grid,int l,int c,int cur_l,int cur_c){
        grid[cur_l][cur_c]='0';
        if(cur_l>0&&grid[cur_l-1][cur_c]=='1'){
            Recur(grid,l,c,cur_l-1,cur_c);
        }
        if(cur_c>0&&grid[cur_l][cur_c-1]=='1'){
            Recur(grid,l,c,cur_l,cur_c-1);
        }
        if(cur_l<l-1&&grid[cur_l+1][cur_c]=='1'){
            Recur(grid,l,c,cur_l+1,cur_c);
        }
        if(cur_c<c-1&&grid[cur_l][cur_c+1]=='1'){
            Recur(grid,l,c,cur_l,cur_c+1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()) return 0;
        int l=grid.size(),c=grid[0].size();
        int cnt=0;
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    ++cnt;
                    Recur(grid,l,c,i,j);
                }
            }
        }
        return cnt;
    }
};
