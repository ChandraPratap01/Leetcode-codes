class Solution {
public:
     vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int s=nums.size();
        vector<vector<int>>result;
        vector<int>subv;
        sort(nums.begin(),nums.end());
        // if(nums.size()%3!=0){
        //     return {};
        // }
        for(int i:nums){
            subv.push_back(i);
            if(subv.size()==3){
                if(subv[2]-subv[0]<=k){
                    result.push_back(subv);
                    subv.clear();
                }
                else{
                    return {};
                }
            }
        }
        return result;
    }
};