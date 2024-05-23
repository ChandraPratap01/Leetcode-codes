class Solution {
public:
    int result;
    void solve(int idx,vector<int>& nums,unordered_map<int,int>&mp,int k){
        if(idx>=nums.size()){
            result++;
            return;
        }
        if(!mp[nums[idx]+k] && !mp[nums[idx]-k]){
            mp[nums[idx]]++;
             solve(idx+1,nums,mp,k);
            mp[nums[idx]]--;   
        }
        solve(idx+1,nums,mp,k);
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        result=0;
        solve(0,nums,mp,k);
            return result-1;
        
    }
};