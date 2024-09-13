class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>result;
        for(vector<int>&vc:queries){
            int left=vc[0];
            int right=vc[1];
            int a=0;
            for(int i=left;i<=right;i++){
                 a^=arr[i];
            }
            result.push_back(a);
        }
        return result;
    }
};