class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st(nums2.begin(),nums2.end());
        unordered_set<int>gt(nums1.begin(),nums1.end());
        vector<int>vt;
        for(int i:gt){
            if(st.find(i)!=st.end()){
                vt.push_back(i);
            }
        }
        return vt;
    }
};