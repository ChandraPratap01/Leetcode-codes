class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        vector<int>binary;
        for(int i=2;i<=n-2;i++){
            int k=n;
            while(k){
                int j=k%i;
                binary.push_back(j);
                k=k/i;
            }
            int s=binary.size();
            int p=0;
            int j=s-1;
            while(p<j){
                if(binary[p]!=binary[j]){
                   return false;
                }
                p++;
                j--;
            }
            
            binary.clear();
            
        }
        return true;
    }
};