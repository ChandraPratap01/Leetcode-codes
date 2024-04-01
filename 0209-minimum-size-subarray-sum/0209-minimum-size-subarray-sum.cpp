class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int s=nums.size();
        int i=0;
        int j=0;
        int sum=0;
        int result=INT_MAX;
        while(j<s){
            sum+=nums[j];
            while(sum>=target){
                result=min(result,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return (result==INT_MAX)?0:result;
    }
};