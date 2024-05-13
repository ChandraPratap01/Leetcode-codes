class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row=grid.size();
        int column=grid[0].size();
        for(int i=0;i<row;i++){
            if(grid[i][0]==0){
                for(int j=0;j<column;j++){
                    grid[i][j]=1-grid[i][j];
                }
            }
        }
        for(int i=1;i<column;i++){
             int zeroes=0;
             int ones=0;
            for(int j=0;j<row;j++){
                if(grid[j][i]==0){
                    zeroes++;
                }
            }
            ones=row-zeroes;
            if(zeroes>ones){
                for(int k=0;k<row;k++){
                    grid[k][i]=1-grid[k][i];
                }
            }
        }
        int result=0;
        for(int i=0;i<row;i++){
            int score=0;
            for(int j=0;j<column;j++){
               score=grid[i][j]*pow(2,column-j-1);
                result+=score;
            }
        }
        return result;
    }
};