class Solution {
public:
    int findResultCity(int n,vector<vector<int>>&SPM,int D){
        int result=-1;
        int city=INT_MAX;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(i!=j && SPM[i][j]<=D){
                    count++;
                }
            }
            if(city>=count){
                city=count;
                result=i;
            }
        }
        return result;
    }
    void dijkstra(int S,unordered_map<int,vector<pair<int,int>>>&adj,vector<int>&result){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,S});
        fill(result.begin(), result.end(), INT_MAX);
        result[S]=0;
        while(!pq.empty()){
            int a=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto&it:adj[node]){
                int dist=it.second;
                int adjnode=it.first;
                if(a+dist<result[adjnode]){
                    result[adjnode]=a+dist;
                    pq.push({a+dist,adjnode});
                }
            }
        }
    }
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>>SPM(n,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++){
            SPM[i][i]=0;
        }
        unordered_map<int,vector<pair<int,int>>>adj;
        for(auto &it:edges){
            int start=it[0];
            int end=it[1];
            int dist=it[2];
            adj[start].push_back({end,dist});
            adj[end].push_back({start,dist});
        }
        for(int i=0;i<n;i++){
            dijkstra(i,adj,SPM[i]);
        }
        // Function to get the answer while iterating
        return findResultCity(n,SPM,distanceThreshold);
    }
};