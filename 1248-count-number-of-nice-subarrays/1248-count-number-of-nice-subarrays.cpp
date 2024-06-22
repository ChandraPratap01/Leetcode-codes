class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int oddnumber=0;
        int result=0;
        mp[oddnumber]=1;
        for(int i=0;i<n;i++){
            oddnumber+=(nums[i]%2);
            if(mp.count(oddnumber-k)){
                result+=mp[oddnumber-k];
            }
            mp[oddnumber]++;
        }
        return result;
    }
};