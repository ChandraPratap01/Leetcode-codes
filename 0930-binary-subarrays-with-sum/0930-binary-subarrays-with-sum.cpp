class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
      unordered_map<int,int>mp;
        int currsum=0;
        int result=0;
        mp[0]=1;
        for(int i:nums){
            currsum+=i;
            int remaining=currsum-goal;
           if(mp.find(remaining)!=mp.end()){
               result+=mp[remaining];
           }
            mp[currsum]++;
        }
        return result;
    }
};