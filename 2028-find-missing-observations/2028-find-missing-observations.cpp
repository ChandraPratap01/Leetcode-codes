class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int remaining_sum=mean*(m+n);
        for(int i=0;i<m;i++){
            remaining_sum-=rolls[i];
        }
        if(remaining_sum<n || remaining_sum > (6*n)){
            return {};
        }
        int avg=remaining_sum/n;
        int remainder=remaining_sum%n;
        vector<int>result(n,avg);
        for(int i=0;i<n;i++){
            if(remainder!=0){
                int a=6-result[i];
                if(a!=0 && a>=remainder){
                    result[i]+=remainder;
                    remainder=0;
                }else if(a!=0 && a<remainder){
                    result[i]+=a;
                    remainder-=a;
                }
            }else{
                return result;
            }
        }
        return result;
    }
};