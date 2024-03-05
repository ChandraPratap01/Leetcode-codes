class Solution {
public:
    int minimumLength(string s) {
        int n=s.length();
        int start=0;
        int end=n-1;
        while(start<end && s[start]==s[end]){
            char ch=s[start];
            while(start<end && s[start]==ch){
                start++;
            }
             while(start<=end && s[end]==ch){
                end--;
            }
        }
        return end-start+1;
    }
};