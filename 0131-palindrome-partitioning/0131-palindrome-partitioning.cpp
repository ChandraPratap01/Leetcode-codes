class Solution {
public:
    int n;
    bool isPalindrome(string s,int j,int i){
        while(j<i){
            if(s[j]!=s[i]){
                return false;
            }
            i--;
            j++;
        }
        return true;
    }
    void backtrack(string &s,int i,vector<string>&curr,vector<vector<string>>&result){
        if(i==n){
            result.push_back(curr);
            return;
        }
        for(int j=i;j<n;j++){
            if(isPalindrome(s,i,j)){
                curr.push_back(s.substr(i,j-i+1));
                backtrack(s,j+1,curr,result);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        n=s.length();
        vector<vector<string>>result;
        vector<string>curr;
        backtrack(s,0,curr,result);
        return result;
    }
};