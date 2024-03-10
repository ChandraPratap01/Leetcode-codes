class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
        vector<int>vt;
        int s=nums1.size();
        int s2=nums2.size();
        int i=0;
            int j=0;
        while(i<s &&j<s2){
            if(nums1[i]==nums2[j]){
                vt.push_back(nums1[i]);
                while(i<s-1&&nums1[i]==nums1[i+1]){
                    i++;
                }
                while(j<s2-1&&nums2[j]==nums2[j+1]){
                    j++;
                }
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
        return vt;
    }
};