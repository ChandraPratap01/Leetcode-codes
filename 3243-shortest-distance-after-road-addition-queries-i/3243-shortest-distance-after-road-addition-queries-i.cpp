class Solution {
public:
    int solve(int n,unordered_map<int,vector<int>>mp){
        queue<int>que;
        que.push(0);
       vector<bool>visited(n,false);
        visited[0]=true;
        int level=0;
        while(!que.empty()){
            int size=que.size();
            while(size--){
                int a=que.front();
                que.pop();
                if(a==n-1){
                    return level;
                }
                for(int &k:mp[a]){
                 if(visited[k]==false)   {
                que.push(k);
                     visited[k]=true;
                 }
                }
            }
            level++;
        }
        return -1;
    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<=n-2;i++){
            mp[i].push_back(i+1);
        }
        vector<int>result;
        for(auto &vec:queries){
            int i=vec[0];
            int j=vec[1];
            mp[i].push_back(j);
            int d=solve(n,mp);
            result.push_back(d);
        }
        return result;
    }
};