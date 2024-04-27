class Solution {
public:
    int t[201][201];
    int n;
    int solve(int col,int row,vector<vector<int>>& grid){
        if(row==n-1){
            return grid[row][col];
        }
        if(t[row][col]!=-1){
            return t[row][col];
        }
        int temp=INT_MAX;
        for(int nextcol=0;nextcol<n;nextcol++){
            if(nextcol!=col){
                temp=min(temp,solve(nextcol,row+1,grid));
            }
        }
        return t[row][col]=grid[row][col]+temp;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
       n=grid.size();
        int result=INT_MAX;
        memset(t,-1,sizeof(t));
        for(int col=0;col<n;col++){
            result=min(result,solve(col,0,grid));
        }
        return result;
    }
};