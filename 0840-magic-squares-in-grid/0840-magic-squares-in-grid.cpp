class Solution {
public:
    bool magicalGrid(vector<vector<int>>& grid,int r,int c){
        unordered_set<int>st;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int num=grid[r+i][c+j];
                if(num<1 || num>9 ||st.count(num)){
                    return false;
                }else{
                    st.insert(num);
                }
            }
        }
        int rowsum=grid[r][c]+grid[r][c+1]+grid[r][c+2];
        for(int k=0;k<3;k++){
            if(grid[r+k][c]+grid[r+k][c+1]+grid[r+k][c+2]!=rowsum){
                return false;
            }
            if(grid[r][c+k]+grid[r+1][c+k]+grid[r+2][c+k]!=rowsum){
                return false;
            }
        }
       if(grid[r][c]+grid[r+1][c+1]+grid[r+2][c+2]!=rowsum){
                return false;
            }
            if(grid[r][c+2]+grid[r+1][c+1]+grid[r+2][c]!=rowsum){
                return false;
            }   
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
       int rows=grid.size();
        int column=grid.size();
        int count=0;
        for(int i=0;i<=rows-3;i++){
            for(int j=0;j<=column-3;j++){
                if(magicalGrid(grid,i,j)){
                    count++;
                }
            }
        }
        return count;
    }
};