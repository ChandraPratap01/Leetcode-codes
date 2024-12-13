class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i=0;i<nums.size();i++){
         pq.push({nums[i],i});
        }
       vector<int>mp(nums.size(),0);
        long long result=0;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int idx=it.second;
            int before=idx-1;
            int after=idx+1;
            if(mp[idx]==0){
                result+=it.first;
                mp[idx]++;
            
            if(before>=0 && mp[before]==0){
                mp[before]++;
            }
            if(after<nums.size() && mp[after]==0){
                mp[after]++;
            }
            }
        }
        return result;
    }
};