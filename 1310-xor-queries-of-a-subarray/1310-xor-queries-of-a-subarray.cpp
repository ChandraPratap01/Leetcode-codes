class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>store(arr.size(),0);
        store[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            store[i]=arr[i]^store[i-1];
        }
        vector<int>result;
        for(vector<int>&vc:queries){
         int value;
            int left=vc[0];
            int right=vc[1];
            if(left!=0){
            value=store[right]^store[left-1];
            }else{
              value=store[right];
            }
            result.push_back(value);
        }
        return result;
    }
};