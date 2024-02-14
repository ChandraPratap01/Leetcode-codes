class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int s=nums.size();
         vector<int>result(s);
        int e=0,o=1;
        for(int i=0;i<s;i++){
            if(nums[i]>0){
                result[e]=nums[i];
                e=e+2;
            }
            else{
                result[o]=nums[i];
                o=o+2;
            }
        }
        return result;
        
    }
};