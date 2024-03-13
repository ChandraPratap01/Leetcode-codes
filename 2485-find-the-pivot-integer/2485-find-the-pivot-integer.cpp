class Solution {
public:
    int pivotInteger(int n) {
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        int result=0;
        for(int i=1;i<=n;i++){
             result+=i;
            if(result==sum){
                return i;
            }
            sum-=i;
        }
        return -1;
    }
};