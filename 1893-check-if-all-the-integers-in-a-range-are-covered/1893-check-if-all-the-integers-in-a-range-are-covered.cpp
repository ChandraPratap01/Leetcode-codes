class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int arr[51]={0};
        for (const vector<int>& range : ranges) {
            for (int num = range[0]; num <= range[1]; num++) {
                if (num <= 50) arr[num] = 1;
            }
        }
        for(int j=left;j<=right;j++){
            if(arr[j]!=1){
                return false;
            }
        }
        return true;
    }
};