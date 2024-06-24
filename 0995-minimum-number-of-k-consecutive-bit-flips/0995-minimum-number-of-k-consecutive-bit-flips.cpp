class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size();
        int flips=0;
        vector<bool>isFlipped(n,false);
        int flipCountFromPastFori=0;
        for(int i=0;i<n;i++){
            if(i>=k && isFlipped[i-k]){
                    flipCountFromPastFori--;
            }
            if(flipCountFromPastFori%2==nums[i]){
                if(i+k>n){
                    return -1;
                }
                flipCountFromPastFori++;
                isFlipped[i]=true;
                flips++;
                
            }
        }
        return flips;
    }
};