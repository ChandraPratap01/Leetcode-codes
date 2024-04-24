class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1){
            return {0};
        }
        unordered_map<int,vector<int>>mp;
        vector<int>indegree(n);
        for(auto &it:edges){
            int u=it[0];
            int v=it[1];
            indegree[u]++;
            indegree[v]++;
            mp[u].push_back(v);
            mp[v].push_back(u); 
        }
        queue<int>que;
        for(int i=0;i<n;i++){
            if(indegree[i]==1){
                que.push(i);
            }
        }
        while(n>2){
            int size=que.size();
            n-=size;
            while(size--){
                int u=que.front();
                que.pop();
                indegree[u]--;
                for(auto &v:mp[u]){
                    indegree[v]--;
                    if(indegree[v]==1){
                        que.push(v);
                    }
                }
            }
        }
        vector<int>result;
        while(!que.empty()){
            result.push_back(que.front());
            que.pop();
        }
        return result;
    }
};