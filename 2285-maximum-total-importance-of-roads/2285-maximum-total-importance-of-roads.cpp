class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>edges(n,0);
        for(auto&vec:roads){
            int i=vec[0];
            int j=vec[1];
            edges[i]++;
            edges[j]++;
        }
        sort(edges.begin(),edges.end());//ascending
        long long sum=0;
        long long assign_value=1;
        for(int i=0;i<n;i++){
            sum+=edges[i]*assign_value;
            assign_value++;
        }
        return sum;
    }
};