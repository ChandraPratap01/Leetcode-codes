class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int rowcol=matrix.size();
        long long sum=0;
        int negative=0;
         int minno=INT_MAX;
        for(int i=0;i<rowcol;i++){
            for(int j=0;j<rowcol;j++){
                sum+=abs(matrix[i][j]);
                 if(minno>abs(matrix[i][j])){    
                    minno=abs(matrix[i][j]);
                }
                if(matrix[i][j]<0){
                    negative++;
                }
            }
        }
        if(negative%2!=0){
            sum-=(2*minno);
        }
        return sum;
    }
};