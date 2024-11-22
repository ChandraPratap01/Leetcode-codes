class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        unordered_map<string,int>mp;
        for(auto &row:matrix){
            string same="";
            int val=row[0];
            for(int col=0;col<c;col++){
                same+=(row[col]==val?'S':'D');
            }
            mp[same]++;
        }
        int maxrow=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            maxrow=max(maxrow,it->second);
        }
        return maxrow;
    }
};