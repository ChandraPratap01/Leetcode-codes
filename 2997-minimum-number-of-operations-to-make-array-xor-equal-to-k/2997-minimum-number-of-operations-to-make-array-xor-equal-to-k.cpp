class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
         int totalxor=0;
        for(int &i:nums){
            totalxor^=i;
        }
        int result;
        result=totalxor^k;
        return __builtin_popcount(result);
    }
};