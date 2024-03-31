class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int minkposition=-1;
        int maxkposition=-1;
        int culprit=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK){
                culprit=i;
            }
            if(nums[i]==minK){
                minkposition=i;
            }
            if(nums[i]==maxK){
                maxkposition=i;
            }
          int minterm =min(minkposition,maxkposition);
            int temp=minterm-culprit;
            if(temp<0){
                ans+=0;
            }
            else{
                ans+=temp;
            }
                
        }
        return ans;
       
    }
};