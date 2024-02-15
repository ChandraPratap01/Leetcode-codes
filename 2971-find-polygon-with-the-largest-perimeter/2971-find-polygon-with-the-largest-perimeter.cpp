class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        long long  cummsum=0;
        long long result=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]<cummsum){
               result=cummsum+nums[i];
            }
            cummsum+=nums[i];
        }
        if(result==0){
            return -1;
        }
        return result;
        
    }
};