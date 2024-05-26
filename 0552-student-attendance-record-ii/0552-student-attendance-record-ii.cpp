class Solution {
public:
    int M=1e9+7;
    int checkRecord(int n) {
int t[100001][2][3];
        for(int i=0;i<=n;i++){
            for(int A=0;A<=1;A++){
                for(int L=0;L<=2;L++){
                    if(i==0){
                        t[0][A][L]=1;
                    }
                    else{
                    long ans=t[i-1][A][0]%M;
                    ans+=(L+1<=2 ? t[i-1][A][L+1]:0);
                    ans+=(A+1<=1?t[i-1][A+1][0]:0);
                        t[i][A][L]=ans%M;
                    }
                    
                }
            }
        }
        return t[n][0][0];
    }
};