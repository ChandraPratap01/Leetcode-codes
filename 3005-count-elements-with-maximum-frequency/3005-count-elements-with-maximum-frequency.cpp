class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       unordered_map<int,int>mp;
        int cmp=INT_MIN;
        int result=0;
        for(int i:nums){
            mp[i]++;
            cmp=max(cmp,mp[i]);
        }
        for(auto i:mp){
          if(i.second==cmp){
              result+=cmp;
          }
        }
        return result;
    }
};