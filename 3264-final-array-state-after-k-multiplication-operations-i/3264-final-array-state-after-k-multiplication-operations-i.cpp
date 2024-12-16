class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        vector<pair<int,int>>vec(n);
        for(int i=0;i<n;i++){
            vec[i]={nums[i],i};
        }
       make_heap(vec.begin(),vec.end(),greater<>());
        while(k--){
             pop_heap(vec.begin(),vec.end(),greater<>());
            auto it=vec.back();
            int start=it.first;
            int end=it.second;
            vec.pop_back();
            nums[end]=start*multiplier;
            vec.push_back({nums[end],end});
            push_heap(vec.begin(),vec.end(),greater<>());
        }
        return nums;
    }
};