class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int s=nums.size();
        bool present =false;
        for( int i=0;i<s;i++){
            if(nums[i]==1){
             present =true;
            }
            if(nums[i]<=0 || nums[i]>s){
                nums[i]=1;
            }
        }
        if(present==false){
            return 1;
        }
        for( int i=0;i<s;i++){
            int num=abs(nums[i]);
            int idx=num-1;
            if(nums[idx]>0){
                
                nums[idx]*=-1;
            }
            
        }
        for(int i=0;i<s;i++){
            if(nums[i]>0){
                return i+1;
            }
    }
         return s+1;
    }
};