class Solution {
public:
    void DFS(int source,int target,vector<vector<int>>&result,vector<vector<int>>& graph,vector<int>&temp){
        temp.push_back(source);
        if(source==target){
            result.push_back(temp);
           
        }
        else{
            for(int &v:graph[source]){
                DFS(v,target,result,graph,temp);
            }
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        int source=0;
        int target=n-1;
        vector<vector<int>>result;
        vector<int>temp;
        DFS(0,target,result,graph,temp);
        return result;
    }
};