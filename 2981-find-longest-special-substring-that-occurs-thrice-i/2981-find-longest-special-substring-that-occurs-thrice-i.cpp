class Solution {
public:
    int maximumLength(string s) {
        map<pair<char,int>,int>mp;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            int l=0;
            for(int j=i;j<s.size();j++){
                if(s[j]==ch){
                    l++;
                    mp[{ch,l}]++;
                }else{
                    break;
                }
            }
        }
        int result=-1;
        for(auto &it:mp){
            int occurence=it.first.second;
            int total=it.second;
            if(total>=3){
                result=max(result,occurence);
            }
        }
        return result;
        
    }
};