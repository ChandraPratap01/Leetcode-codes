class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st(begin(nums2),end(nums2));
        for(int i:nums1){
            if(st.find(i)!=st.end()){
                return i;
            }
        }
        return -1;
    }
};