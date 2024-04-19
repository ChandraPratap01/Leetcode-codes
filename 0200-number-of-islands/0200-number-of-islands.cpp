class Solution {
public:
int r;
int c;
vector<pair<int,int>>direction{{0,1},{1,0},{0,-1},{-1,0}};
    void dfs(vector<vector<char>>&grid,int i,int j){
        if(i<0 ||j<0 || i>=r || j>=c || grid[i][j]!='1'){
            return;
        }
        grid[i][j]=-1;
        for(pair<int,int>&dir:direction){
            int i_=i+dir.first;
            int j_=j+dir.second;
            dfs(grid,i_,j_);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0){
            return 0;
        }
         r=grid.size();
         c=grid[0].size();
        int count=0;
        for(int i=0;i<r;i++ ){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};