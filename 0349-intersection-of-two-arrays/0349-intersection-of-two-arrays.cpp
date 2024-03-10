class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int s=nums1.size();
        int s2=nums2.size();
        int i=0;
            int j=0;
        while(i<s &&j<s2){
            if(nums1[i]==nums2[j]){
                st.insert(nums1[i]);
                i++;
                j++;
            }
            else{
               if(nums1[i]>nums2[j]){
                   j++;
               }
               else{
                   i++;
               }
            }
    }
        vector<int>vt(st.begin(),st.end());
        return vt;
    }
};