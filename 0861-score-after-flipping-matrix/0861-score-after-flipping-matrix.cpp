class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row=grid.size();
        int column=grid[0].size();
        int sum=0;
        sum+=pow(2,column-1)*row;
         for(int i=1;i<column;i++){
             int ones=0;
              int zeroes=0;
            for(int j=0;j<row;j++){
                if(grid[j][i]==grid[j][0]){
                  ones++;
                }
            }
            zeroes=row-ones;
            int  countones=max(zeroes,ones);
                 sum+=pow(2,column-i-1)*countones;
         }
        return sum;
    }
};