class Solution {
public:
 int M=1e9+7;
    int t[100001][2][3];
    int solve(int n,int absent,int late){
  if(absent>1 || late>=3){
            return 0;
        }
        if(n==0){
            return 1;
        }
        if(t[n][absent][late]!=-1){
            return t[n][absent][late];
        }
        int A=solve(n-1,absent+1,0);
        int B=solve(n-1,absent,late+1);
        int C=solve(n-1,absent,0);
            return t[n][absent][late]=((A+B)%M+C)%M;
    }
    int checkRecord(int n) {
        memset(t,-1,sizeof(t));
        return solve(n,0,0);  
    }
};