class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>prefix(nums.size(),0);
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1];
            if(nums[i]%2==0 && nums[i-1]%2==0 || nums[i]%2!=0 && nums[i-1]%2!=0){
                prefix[i]++;
            }
        }
        vector<bool>result;
        for(auto &vec:queries){
            int start=vec[0];
            int end=vec[1];
            if(prefix[start]== prefix[end]){
                result.push_back(true);
            }else{
                 result.push_back(false);
            }
        }
        return result;
    }
};