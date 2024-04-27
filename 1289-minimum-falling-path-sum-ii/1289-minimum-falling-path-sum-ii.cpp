class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>t(n,vector<int>(n,INT_MAX));
        for(int col=0;col<n;col++){
            t[n-1][col]=grid[n-1][col];
        }
        for(int row=n-2;row>=0;row--){
            for(int col=0;col<n;col++){
                int ans=INT_MAX;
                for(int nextcol=0;nextcol<n;nextcol++){
                    if(nextcol!=col){
                    ans=min(ans,t[row+1][nextcol]);
                    }
                }
                t[row][col]=ans+grid[row][col];
            }
        }
        int result=INT_MAX;
        for(int col=0;col<n;col++){
            result=min(result,t[0][col]);
        }
        return result;
    }
};