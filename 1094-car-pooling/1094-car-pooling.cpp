class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>mp;
        for(vector<int>vt:trips){
            int start=vt[1];
            int end=vt[2];
            mp[start]+=vt[0];
            mp[end]-=vt[0];
        }
        int sum=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            sum+=it->second;
            if(sum>capacity){
                return false;
            }
        }
        return true;
    }
};