class Solution {
public:
    int n;
    int t[2501][2501];
  
    int solve(int i,int prev,vector<int>&nums){
        if(i>=n){
            return 0;
        }
        if(prev!=-1 && t[i][prev]!=-1){
            return t[i][prev];
        }
        int take=0;
        if(prev==-1 || nums[i]>nums[prev]){
             take=1+solve(i+1,i,nums);
        }
         int skip=solve(i+1,prev,nums);
        if(prev!=-1){
            t[i][prev]=max(take,skip);
        }
        return max(take,skip);
    }
    int lengthOfLIS(vector<int>& nums) {
    n=nums.size();
        memset(t,-1,sizeof(t));
        int result=solve(0,-1,nums);
        return result;
    }
};