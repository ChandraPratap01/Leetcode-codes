class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>result(n,0);
        if(k==0){
            return result;
        }
        int i=-1;
        int j=-1;
        if(k>0){
            i=1;
            j=k;
        }else{
            i=n-abs(k);
            j=n-1;
        }
        int sum=0;
        for(int t=i;t<=j;t++){
            sum+=code[t];
        }
        for(int idx=0;idx<n;idx++){
            result[idx]=sum;
            sum-=code[i%n];
            sum+=code[(j+1)%n];
            j++;
            i++;
        }
        return result;
    }
};