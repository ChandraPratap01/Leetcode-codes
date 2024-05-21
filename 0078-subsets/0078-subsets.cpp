class Solution {
public:
    vector<vector<int>>result;
    void solve(int i,vector<int>&temp,vector<int>nums){
        if(i>=nums.size()){
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(i+1,temp,nums);
        temp.pop_back();
        solve(i+1,temp,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>temp;//to store pair
        solve(0,temp,nums);
        return result;
    }
};