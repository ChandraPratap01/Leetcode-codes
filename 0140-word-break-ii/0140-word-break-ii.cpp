class Solution {
public:
    vector<string>result;
    int n;
    unordered_set<string>st;
     void solve(int i,string s,string &currstring){
        if(i>=n){
            result.push_back(currstring);
            return;
        }
        for(int j=i;j<n;j++){
           string check=s.substr(i,j-i+1);
             if(st.count(check)){
                 string cmp=currstring;
                 if(!currstring.empty()){
                     currstring+=" ";
                 }
                 currstring+=check;
                 solve(j+1,s,currstring);
                 currstring=cmp;
                 
             }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        n=s.size();
        for(string &St:wordDict){
            st.insert(St);
        }
        string currstring="";
        solve(0,s,currstring);
            return result;
    }
};