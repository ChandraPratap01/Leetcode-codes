class Solution {
public:
    int peri;
    int n;
    int m;
    vector<vector<int>>direction{{1,0},{-1,0},{0,1},{0,-1}};
    int dfs(vector<vector<int>>& grid,int i,int j){
        queue<pair<int,int>>que;
        que.push({i,j});
        grid[i][j]=-1;
        while(!que.empty()){
            auto it=que.front();
            que.pop();
            for(auto &dir:direction){
                int i_=it.first+dir[0];
                int j_=it.second+dir[1];
                if(i_<0 || i_>=m || j_<0 || j_>=n || grid[i_][j_]==0){
                    peri++;
                }
                else if(grid[i_][j_]==-1){
                    continue;
                }
                else{
                    que.push({i_,j_});
                    grid[i_][j_]=-1;
                    
                }
                
            }
        }
        return peri;
    }    
    int islandPerimeter(vector<vector<int>>& grid) {
        m    = grid.size();
         n    = grid[0].size();
        peri = 0;
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                
                if(grid[i][j] == 1) {
                   return  dfs(grid, i, j);
                }
                
            }
        }
        
        return -1;
    }
};