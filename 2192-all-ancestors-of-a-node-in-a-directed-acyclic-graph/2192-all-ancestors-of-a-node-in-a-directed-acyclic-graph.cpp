class Solution {
public:
    
    void DFS(unordered_map<int,vector<int>>&adj,int ancestor,int i,vector<vector<int>>&result){
        for(int k:adj[i]){
            if(result[k].empty() || result[k].back()!=ancestor ){
                result[k].push_back(ancestor);
                DFS(adj,ancestor,k,result);
                
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
       vector<vector<int>>result(n); 
    unordered_map<int,vector<int>>adj;
        for(auto &vec:edges){
            int u=vec[0];
            int v=vec[1];
            adj[u].push_back(v);
        }
        for(int i=0;i<n;i++){
            int ancestor=i;
            DFS(adj,ancestor,i,result);
        }
        return result;
    }
};