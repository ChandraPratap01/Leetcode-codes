class Solution {
public:
    
    //----PROPERTY---->ADDING MORE ELEMENT FOR BITWISE AND DECREASES ITS VALUE
    int longestSubarray(vector<int>& nums) {
        int maxvalue=0;
        int maxlength=0;
        int result=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]>maxvalue){
               maxvalue=nums[i];
               maxlength=0;
                   result=0;
           }
            if(nums[i]==maxvalue){
                maxlength++;
            }else{
                maxlength=0;
            }
            result=max(result,maxlength);
        }
        return result;
    }
};