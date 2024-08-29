class Solution {
public:
    bool substring(vector<vector<int>>& grid1,vector<vector<int>>& grid2,int i,int j){
        if(i<0 || i>=grid1.size() || j<0 ||j>=grid1[0].size() ){
            return true;
        } 
        if(grid2[i][j]!=1){
            return true;
        }
        grid2[i][j]=-1;
        bool result=grid1[i][j]==1;
        result=result & substring(grid1,grid2,i+1,j);
        result=result & substring(grid1,grid2,i,j+1);
        result=result & substring(grid1,grid2,i-1,j);
        result=result & substring(grid1,grid2,i,j-1);
        
        return result;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int r=grid2.size();
        int c=grid2[0].size();
        int island=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid2[i][j]==1 && substring(grid1,grid2,i,j)){
                    island++;
                }
            }
        }
        return island;
    }
};