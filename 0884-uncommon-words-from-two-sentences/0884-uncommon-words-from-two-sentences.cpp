class Solution {
public:
    void solve(string S,unordered_map<string,int>&mp){
        string store="";
        for(int i=0;i<S.size();i++){
            if(S[i]==' '){
                mp[store]++;
                store="";
            }else{
                store+=S[i];
            }
        }
         mp[store]++;
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        string Z=s1+" "+s2;
       unordered_map<string,int>mp;
        vector<string>result;
        solve(Z,mp);
        for(auto&it:mp){
            if(it.second==1){
                result.push_back(it.first);
            }
        }
        return result;
    }
};