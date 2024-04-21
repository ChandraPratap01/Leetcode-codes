class Solution {
public:
    bool solve(unordered_map<int,vector<int>>&mp,vector<bool>&visited,int source,int destination){
        if(source==destination){
            return true;
        }
        if(visited[source]==true){
            return false;
        }
        visited[source]=true;
        for(auto &i:mp[source]){
            if(solve(mp,visited,i,destination)==true){
                return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mp;
        vector<bool>visited(n,false);
        for(vector<int>&edge:edges){
            int u=edge[0];
            int v=edge[1];
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        return solve(mp,visited,source,destination);
    }
};