class Solution {
public:
 void solve(vector<int>&temp,vector<vector<int>>&result,int idx,int n,vector<int>nums){
          if(idx>=n){
            result.push_back(temp);
            return;
          }
          solve(temp,result,idx+1,n,nums);
         temp.push_back(nums[idx]);
          solve(temp,result,idx+1,n,nums);

 }
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>temp;
        int n=nums.size();
        int idx=0;
        solve(temp,result,0,n,nums);
        int sum=0;
        for(int i=0;i<result.size();i++){
            int sum2=0;
            for(int j=0;j<result[i].size();j++){
                sum2^=result[i][j];
            }
            sum+=sum2;
        }
        return sum;
        
    }
};