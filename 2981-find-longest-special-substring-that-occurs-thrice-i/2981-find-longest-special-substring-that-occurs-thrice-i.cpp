class Solution {
public:
    int maximumLength(string s) {
        int n=s.size();
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            string result="";
            for(int j=i;j<n;j++){
                if(result.empty()){
                    result.push_back(s[j]);
                     mp[result]+=1;
                }
                else if(result.back()==s[j]){
                    result.push_back(s[j]);
                     mp[result]+=1;
                     continue;
                }
                else{
                   break;
                }
               
            }
        }
        int ans=INT_MIN;
        for(auto &it:mp){
            if(it.second >=3){
                ans=max(ans,(int)it.first.size());
            }
        }
        return (ans==INT_MIN)?-1:ans;
    }
};