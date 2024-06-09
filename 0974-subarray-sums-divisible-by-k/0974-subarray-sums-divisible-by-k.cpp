class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int count=0;
        
        unordered_map<int, int> mp;
        
       mp[0]=1;
        
        int sum = 0;
        
        for(int i = 0; i<n; i++) {
            sum += nums[i];
            
            int remainder = sum%k;
            if(remainder<0){
                remainder+=k;
            }
            
            if(mp.find(remainder) != mp.end()) {
                count+=mp[remainder];
        }
              mp[remainder]++;
        }
        return count;
    }
};