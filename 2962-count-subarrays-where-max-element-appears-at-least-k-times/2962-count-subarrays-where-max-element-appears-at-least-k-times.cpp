class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxno=*max_element(begin(nums),end(nums));
        int i=0;
        int j=0;
        long long result=0;
        int count=0;
        int s=nums.size();
        while(j<s){
            if(nums[j]==maxno){
                count++;
            }
            while(count>=k){
                result+=s-j;
                if(nums[i]==maxno){
                    count--;
                }
                i++;
            }
            j++;
        }
        return result;
    }
};