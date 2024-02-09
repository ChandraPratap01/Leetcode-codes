class Solution {
public:
int t[10001];
int persquare(int n){
    if(n==0){
            return 0;
        }
        if(t[n]!=-1){
            return t[n];
        }
        
        int result=INT_MAX;
        int count=0;
        for(int i=1;i*i<=n;i++){
           count=1+persquare(n-i*i);
           result=min(result,count);
        }
        return t[n]=result;
}
    int numSquares(int n) {
       memset(t,-1,sizeof(t));
       return persquare(n);   
    }
};