class Solution {
public:
    int n;
    int m;
    vector<vector<int>>direction{{1,0},{-1,0},{0,1},{0,-1}};
    bool track(int i,int j,string &word,int idx,vector<vector<char>>& board){
        if(idx>=word.length()){
            return true;
        }
        if(i<0 || j<0 ||i>=m || j>=n || board[i][j]!=word[idx] || board[i][j]=='$'){
            return false;
        }
        char temp=board[i][j];
        board[i][j]='$';
        for(auto &dir:direction){
            int i_=i+dir[0];
            int j_=j+dir[1];
            if(track(i_,j_,word,idx+1,board)){
                return true;
            }
        }
        board[i][j]=temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
         m=board.size();
         n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && track(i,j,word,0,board)){
                    return true;
                }
            }
        }
        return false;
    }
};