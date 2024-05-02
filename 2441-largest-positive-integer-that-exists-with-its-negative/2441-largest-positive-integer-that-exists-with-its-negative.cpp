class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int>mp;
        int result=-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(!mp[-nums[i]]){
                mp[nums[i]]++;
            }
            else{
                result=max(result,nums[i]);
            }
        }
        return result;
    }
};