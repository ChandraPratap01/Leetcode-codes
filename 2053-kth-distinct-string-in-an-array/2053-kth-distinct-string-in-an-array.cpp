class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(string &i:arr){
            mp[i]++;
        }
        int count=0;
        for ( auto& it : arr) {
            if(mp[it]==1){
                 count++;
                if(count==k){
                    return it;
                }
            }
        }
        return "";
    }
};