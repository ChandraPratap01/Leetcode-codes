class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>mp(26,-1);
        for(int i=0;i<order.length();i++){
            mp[order[i]-'a']=i;
        }
        
        auto mycomparator=[mp](char&ch1,char&ch2){
            if(mp[ch1-'a']<mp[ch2-'a']){
                return true;
            }
            else{
                return false;
            }
        };
        
        sort(s.begin(),s.end(),mycomparator);
        return s;
    }
};