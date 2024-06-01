class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        int i=0;
        int j=1;
        int n=s.size();
        while(j<n){
            sum+=abs(s[i]-s[j]);
            i++;
            j++;
        }
        return sum;
    }
};