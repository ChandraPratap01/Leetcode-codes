class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
       vector<int>arr(n,1);
      //  arr[i]=LIS ending at ith index;
        int maxLIS=1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    arr[i]=max(arr[i],arr[j]+1);
                    maxLIS=max(maxLIS,arr[i]);
                }
            }
        }
        return maxLIS;
        
        
    }
};