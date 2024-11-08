class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        for(int i=1;i<nums.size();i++){
            int store=nums[i-1];
            store^=nums[i];
            nums[i]=store;
        }
        for(int i=0;i<nums.size();i++){
              int mask = (1 << maximumBit) - 1;
            int bit=nums[i];
                 mask=mask^bit;
                 nums[i]=mask;
            }
            reverse(nums.begin(),nums.end());
               return nums;
        }
     
};