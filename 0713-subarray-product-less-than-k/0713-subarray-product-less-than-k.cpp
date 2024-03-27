class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0;
        }
       int s=nums.size();
        int i=0;
        int j=0;
        int count=0;
        int product=1;
        while(j<s){
          product*=nums[j];
            while(product>=k){
                product/=nums[i];
                i++;
            }
            count+=(j-i+1);
            j++;
        }
        return count;
    }
};