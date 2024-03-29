class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        std::vector<std::vector<int>> arr(m, std::vector<int>(n, 0));
        int s=indices.size();
        int count=0;
        for(int i=0;i<s;i++){
            for(int j=0;j<n;j++){
                arr[indices[i][0]][j]++;
            }
            for(int k=0;k<m;k++){
                arr[k][indices[i][1]]++;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]%2!=0){
                    count++;
                }
            }
        }
        return count;
    }
};