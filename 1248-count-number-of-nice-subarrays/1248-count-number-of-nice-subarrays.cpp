class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int prev=0;
        int odd=0;
        int result=0;
        while(j<n){
            if(nums[j]%2!=0){
                odd++;
                prev=0;
            }
            while(odd==k){
                prev++;
                if(nums[i]%2==1){
                    odd--;
                }
                 i++;
            }
            result+=prev;
            j++;
        }
        return result;
    }
};