class Solution {
public:
    int specialArray(vector<int>& nums) {
      sort(nums.begin(),nums.end())  ;
        for(int i=nums.size();i>=1;i--){
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=i){
                    int k=nums.size()-j;
                    if(k==i){
                        return i;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        return -1;
    }
};