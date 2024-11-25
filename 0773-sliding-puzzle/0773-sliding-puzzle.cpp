class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string store="" ;
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                store+=to_string(board[i][j]);
            }
        }
        string target="123450";
        queue<string>que;
        que.push(store);
        unordered_set<string>st;
        st.insert(store);
         unordered_map<int,vector<int>>mp;
    mp[0]={1,3};
    mp[1]={0,2,4};
    mp[2]={1,5};
    mp[3]={0,4};
    mp[4]={1,3,5};
    mp[5]={2,4};
        int count=0;
        while(!que.empty()){
       
        int n=que.size();
        while(n--){
             string curr=que.front();
              que.pop();
            if(curr==target){
                return count;
            }
              int idx=curr.find('0');
                  for(int i=0;i<mp[idx].size();i++){
                        string newpath=curr;
                      swap(newpath[idx],newpath[mp[idx][i]]);
                      if(st.find(newpath)==st.end()){
                          st.insert(newpath);
                           que.push(newpath);
                      } 
                  }
        }
              count++;
        }
        return -1;
    }
};