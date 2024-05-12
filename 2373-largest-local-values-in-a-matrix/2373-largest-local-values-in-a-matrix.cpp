class Solution {
public:
    int findmax( vector<vector<int>>& grid,int i,int j){
        int value=INT_MIN;
        for(int k=i;k<=i+2;k++){
            for(int l=j;l<=j+2;l++){
                 value=max(value,grid[k][l]);
            }   
        }
        return value;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int row=grid.size();
        int column=grid[0].size();
        vector<vector<int>>result(row-2,vector<int>(column-2));
        for(int i=0;i<row-2;i++){
            for(int j=0;j<column-2;j++){
               result[i][j]=findmax(grid,i,j); 
            }
        }
        return result;
    }
};