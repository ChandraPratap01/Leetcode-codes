class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        int maxno=1;
        vector<int>LDS(n,1);
        int longest_idx=0;
        vector<int>result;
        sort(nums.begin(),nums.end());
        vector<int>previdx(n,-1);
            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                    if(nums[i]%nums[j]==0){
                        if(LDS[i]<LDS[j]+1){
                            LDS[i]=LDS[j]+1;
                            previdx[i]=j;
                        }
                        if(maxno<LDS[i]){
                            maxno=LDS[i];
                            longest_idx=i;             
                        }
                    }
                }
            }
        while(longest_idx!=-1){
            result.push_back(nums[longest_idx]);
            longest_idx=previdx[longest_idx];
        }
        return result;
        
        
    }
};