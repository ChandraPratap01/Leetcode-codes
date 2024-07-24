class Solution {
public:
    string getmapnum(string&idxnum,vector<int>&mp){
        string store="";
        for(int i=0;i<idxnum.size();i++){
            char ch=idxnum[i];
            int idx=ch-'0';
            store+=to_string(mp[idx]);
        }
        return store;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            string num=to_string(nums[i]);
            string mapnum=getmapnum(num,mapping);
            int new_mapnum=stoi(mapnum);
            vec.push_back({new_mapnum,i});
        }
        sort(vec.begin(),vec.end());
        vector<int>result;
        for(auto &it:vec){
            int a=it.second;
            result.push_back(nums[a]);
        }
        return result;
    }
};