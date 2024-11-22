class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int rowsame=0;
        // O(r*(c+c*r))
        //O(r*r*c)
        for(auto &row:matrix){  //O(r)
            vector<int>vec(c);  //O(c)
            for(int col=0;col<c;col++){ //O(c)
                vec[col]=row[col]==1?0:1;
            }
            int count=0;
            for(auto &row2:matrix){  //O(r)
                if(row2==vec || row2==row){
                    count++;
                }
            }
            rowsame=max(rowsame,count);
        }
        return rowsame;
    }
};