class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        unordered_map<int,vector<pair<int,double>>>adj;
        vector<double>result(n,0);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            double prob=succProb[i];
            adj[u].push_back({v,prob});
            adj[v].push_back({u,prob});
        }
        priority_queue<pair<double,int>>pq;
        result[start_node]=1.0;
        pq.push({1.0,start_node});
        while(!pq.empty()){
            double pqprob=pq.top().first;
            int pqnode=pq.top().second;
            pq.pop();
            for(auto &it:adj[pqnode]){
                int adjnode=it.first;
                double adjprob=it.second;
                if(result[adjnode]<pqprob*adjprob){
                    result[adjnode]=pqprob*adjprob;
                    pq.push({result[adjnode],adjnode});
                }
                
            }
        }
         return result[end_node];
    }
};