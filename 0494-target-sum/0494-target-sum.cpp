class Solution {
public:
    int arr[1001][1001];
    int solve(vector<int>& nums,int idx,int sum,int target,unordered_map<string,int>&mp){
        if(idx==nums.size()){
            if(sum==target){
                return 1;
            }else{
                return 0;
            }
        }
        string key=to_string(idx)+"_"+to_string(sum);
        if(mp.count(key)){
            return mp[key];
        }
        int add=solve(nums,idx+1,sum+nums[idx],target,mp);
        int sub=solve(nums,idx+1,sum-nums[idx],target,mp);
        return mp[key]=add+sub;
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int count=0;
        unordered_map<string,int>mp;
        count+=solve(nums,0,0,target,mp);
        return count;
    }
};