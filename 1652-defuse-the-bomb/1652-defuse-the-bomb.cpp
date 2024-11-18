class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
       int s=code.size();
        vector<int>result(s,0);
        for(int i=0;i<s;i++){
            if(k==0){
                return result;
            }
            if(k>0){
                 for(int j=i+1;j<=i+k;j++){
                     result[i]+=code[j%s];
                 }
                
            }else{
                 for(int j=i-abs(k);j<i;j++){
                     result[i]+=code[(j+s)%s];
                 }
            }
        }
        return result;
    }
};