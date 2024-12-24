class Solution {
public:
    pair<int,int>BFS(unordered_map<int,vector<int>>&list2,int startNode){
       unordered_map<int,bool>Repeated;
        queue<int>que;
        int dist=0;
        int RightFarthest=0;
        que.push(startNode);
        Repeated[startNode]=true;
        while(!que.empty()){
            int n=que.size();
            while(n--){
                int top=que.front();
                RightFarthest=top;
                que.pop();
                for(int it:list2[top]){
                    if(Repeated[it]==false){
                         que.push(it);
                        Repeated[it]=true;
                    }
                   
                    
                }
            }
            if(!que.empty()){
                 dist++;
            }
        }
        return {RightFarthest,dist};
    }
    int findDiameter(unordered_map<int,vector<int>>&list){
        auto [Rightfarthest,dist]=BFS(list,0);
         auto [Leftfarthest,diameter]=BFS(list,Rightfarthest);
        return diameter;
    }
    unordered_map<int,vector<int>>createAdj(vector<vector<int>>&edges){
        unordered_map<int,vector<int>>adj;
        for(auto &it:edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return adj;
    }
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        unordered_map<int,vector<int>>adj1=createAdj(edges1);
        unordered_map<int,vector<int>>adj2=createAdj(edges2);
        int diameter1=findDiameter(adj1);
        int diameter2=findDiameter(adj2);
        int combine=(diameter1+1)/2+(diameter2+1)/2+1;
        return max({diameter1,diameter2,combine});
    }
};