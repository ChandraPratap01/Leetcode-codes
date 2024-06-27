class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mp;
        int n=edges.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                mp[edges[i][j]]++;
            }
        }
       for(auto it=mp.begin();it!=mp.end();it++){
           if(it->second==n){
               return it->first;
           }
       }
                   return -1;
    }
};