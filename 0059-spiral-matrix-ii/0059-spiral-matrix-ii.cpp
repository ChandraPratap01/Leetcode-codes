class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>result(n,vector<int>(n,0));
        int top=0,left=0,bottom=n-1,right=n-1;
        int count=1;
        while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
           result[top][i]=count; 
            count++;
           }
            top++;
            for(int j=top;j<=bottom;j++){
                result[j][right]=count;
                count++;
            }
            right--;
            for(int k=right;k>=left;k--){
                result[bottom][k]=count;
                count++;
            }
            bottom--;
           for(int l=bottom;l>=top;l--){
        result[l][left]=count;
        count++;
    }
    left++;
    }
        return result;
    }
};