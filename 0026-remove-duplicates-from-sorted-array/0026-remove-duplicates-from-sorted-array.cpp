class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st(nums.begin(),nums.end());
        nums.clear();
        for(int i:st)
        {
            nums.push_back(i);
        }
        return nums.size();
        
    }
};