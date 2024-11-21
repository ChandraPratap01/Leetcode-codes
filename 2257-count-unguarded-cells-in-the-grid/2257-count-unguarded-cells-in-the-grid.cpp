class Solution {
public:
    void solve(vector<vector<int>>&result,int m,int n,int i,int j){
        
        
        for (int col = j + 1; col < n; col++) {
            if(result[i][col] == 2 || result[i][col] == 3){
                break;
            }
            result[i][col] = 1;
        }
        
        
        for (int col = j - 1; col >= 0; col--) {
            if(result[i][col] == 2 || result[i][col] == 3){
                break;
            }
            result[i][col] = 1; 
        }
        
       
        for (int row = i + 1; row < m; row++) {
            if(result[row][j] == 2 || result[row][j] == 3){
                break;
            }
            result[row][j] = 1; 
        }
        
       
        for (int row = i - 1; row >= 0 ; row--) {
            if(result[row][j] == 2 || result[row][j] == 3){
                break;
            }
            result[row][j] = 1; 
        }  
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
       vector<vector<int>>result(m,vector<int>(n,0));
        for(vector<int>vc:walls){
            int r=vc[0];
            int c=vc[1];
            result[r][c]=2;
        }
         for(vector<int>vc:guards){
            int r=vc[0];
            int c=vc[1];
             result[r][c]=3;
            
        }
        for(vector<int>vc:guards){
            int r=vc[0];
            int c=vc[1];
            
             solve(result,m,n,r,c);
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(result[i][j]==0){
                    count++;
                }
            }
        }
        return count;
        
        
       
    }
};