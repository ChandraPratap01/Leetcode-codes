class Solution {
public:
    int row,column;
    vector<vector<int>>direction{{-1,0},{1,0},{0,-1},{0,1}};
    int DFS(vector<vector<int>>& grid,int i,int j){
        if(i>=row || i<0 || j>=column || j<0 || grid[i][j]==0){
            return 0;
        }
        int goldvalue=grid[i][j];
        grid[i][j]=0;
        int maxvalue=0;
        for(vector<int>&dir:direction){
            int i_=i+dir[0];
            int j_=j+dir[1];
            maxvalue=max(maxvalue,DFS(grid,i_,j_));
        }
            
            
            grid[i][j]=goldvalue;
        return maxvalue+goldvalue;
        }
    int getMaximumGold(vector<vector<int>>& grid) {
       row=grid.size();
        column=grid[0].size();
        int result=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(grid[i][j]!=0){
                result=max(result,DFS(grid,i,j));
                }
            }
        }
        return result;
    }
};