class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       unordered_map<int,int>mp;
        int cmp=INT_MIN;
        int result;
        for(int i:nums){
            mp[i]++;
        }
        for(auto i:mp){
          if(cmp<i.second){
              cmp=i.second; 
              result=0;
          }
          if(cmp==i.second){
                  result+=i.second;
          }
          }
        return result;
        }
};