class Solution {
public:
  
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mp;
        vector<bool>visited(n,false);
        for(vector<int>&edge:edges){
            int u=edge[0];
            int v=edge[1];
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        queue<int>que;
        que.push(source);
        visited[source]=true;
        while(!que.empty()){
            int node=que.front();
            que.pop();
            if(node==destination){
                return true;
            }
                for(auto &it:mp[node]){
                    if(!visited[it]==true){
                    que.push(it);
                    visited[it]=true;
                    }
                }
            }
        return false;
    }
};