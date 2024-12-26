class Solution {
public:
    int solve(vector<int>& nums,int idx,int sum,int target){
        if(idx==nums.size()){
            if(sum==target){
                return 1;
            }else{
                return 0;
            }
        }
        int add=solve(nums,idx+1,sum+nums[idx],target);
        int sub=solve(nums,idx+1,sum-nums[idx],target);
        return add+sub;
        
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int count=0;
        count+=solve(nums,0,0,target);
        return count;
    }
};