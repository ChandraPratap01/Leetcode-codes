class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int result=0;
        mp[0]=-1;
        int cummsum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cummsum+=-1;
            }
            else{
                cummsum+=1;
            }
            if(mp.find(cummsum)!=mp.end()){
                int j=mp[cummsum];
                result=max(result,(i-j));
            }
            else{
                mp[cummsum]=i;
            }
        }
        return result;
    }
};