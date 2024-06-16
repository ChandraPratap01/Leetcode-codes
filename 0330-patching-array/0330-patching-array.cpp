class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int patch=0;
        int i=0;
        long maxvalue=0;
        while(maxvalue<n){
            if(i<nums.size() && nums[i]<=maxvalue+1){
                maxvalue+=nums[i];
                i++;
            }
            else{
                maxvalue+=(maxvalue+1);
                 patch++;
            }
        }
        return patch;
    }
};