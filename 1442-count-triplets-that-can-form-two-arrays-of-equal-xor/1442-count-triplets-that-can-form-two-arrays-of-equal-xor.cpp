class Solution {
public:
    int countTriplets(vector<int>& arr) {
        vector<int>prefixXor(begin(arr),end(arr));
        prefixXor.insert(begin(prefixXor),0);
        int n=prefixXor.size();
        for(int i=1;i<n;i++){
            prefixXor[i]^=prefixXor[i-1];
        }
        int triplet=0;
        for(int i=0;i<n-1;i++){
            for(int k=i+1;k<n;k++){
                if(prefixXor[i]==prefixXor[k]){
                    triplet+=k-i-1;
                }
            }
        }
        return triplet;
    }
};