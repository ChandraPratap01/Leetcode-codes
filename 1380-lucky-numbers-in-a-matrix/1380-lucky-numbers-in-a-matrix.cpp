class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>rowelement(matrix.size());
        vector<int>columnelement(matrix[0].size());
        for(int i=0;i<matrix.size();i++){
             int minelement=INT_MAX;
            for(int j=0;j<matrix[0].size();j++){
                minelement=min(minelement,matrix[i][j]);
            }
             rowelement[i]=minelement;
            }
        for(int j=0;j<matrix[0].size();j++){
            int maxelement=INT_MIN;
            for(int i=0;i<matrix.size();i++){
               maxelement=max(maxelement,matrix[i][j]);
            }
            columnelement[j]=maxelement;
        }
        vector<int>result;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
               if(rowelement[i]==matrix[i][j] && columnelement[j]==matrix[i][j]){
                result.push_back(matrix[i][j]);
               }
            }
        }
        return result;
    }
};