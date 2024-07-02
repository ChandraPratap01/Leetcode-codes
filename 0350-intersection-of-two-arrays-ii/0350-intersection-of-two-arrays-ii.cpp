class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_map<int,int>mp;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            if(mp.find(nums2[j])!=mp.end() && mp[nums2[j]]>0){
                result.push_back(nums2[j]);
                mp[nums2[j]]--;
            }
        }
        return result;
    }
};