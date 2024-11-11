class Solution {
public:
    bool isPrime(int j){
        for(int k=2;k<=j/2;k++){
           if(j%k==0){
               return false;
           } 
        }
        return true;
    }
    
    bool primeSubOperation(vector<int>& nums) {
     int n=nums.size();
        for(int i=n-2;i>=0;i--){
          if(nums[i]<nums[i+1]){
            continue;
          }
               for(int j=2;j<nums[i];j++){
                   if(isPrime(j)){
                       if((nums[i]-j)<nums[i+1]){
                           nums[i]=nums[i]-j;
                           break;
                       }
                   }
               }
                if(nums[i]>=nums[i+1]){
                    return false;
                }
        }
        return true;
    }
};