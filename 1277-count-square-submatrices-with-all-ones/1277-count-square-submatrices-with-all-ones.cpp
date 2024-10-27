class Solution {
public:
    int r,c;
    int grid[301][301]={-1};
    int solve(int i,int j,vector<vector<int>>&matrix){
        if(i>=r || j>=c){
            return 0;
        }
        if(matrix[i][j]==0){
            return 0;
        }
        if(grid[i][j]!=-1){
            return grid[i][j];
        }
        int right=solve(i,j+1,matrix);
        int down=solve(i+1,j,matrix);
        int diag=solve(i+1,j+1,matrix);
        
        return grid[i][j]=1+min({right,down,diag});
    }
    int countSquares(vector<vector<int>>& matrix) {
        r=matrix.size();
        c=matrix[0].size();
        int result=0;
        memset(grid,-1,sizeof(grid));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==1){
                    result+=solve(i,j,matrix);
                }
            }
        }
        return result;
    }
};