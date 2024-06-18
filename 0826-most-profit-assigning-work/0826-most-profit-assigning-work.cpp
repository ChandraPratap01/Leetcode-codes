class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=difficulty.size();
        int m=worker.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({profit[i],difficulty[i]});
        }
        sort(worker.begin(),worker.end(),greater<int>());
        int i=0;
        int result=0;
        while(i<m && !pq.empty()){
            if(pq.top().second>worker[i]){
                pq.pop();
            }
            else{
                result+=pq.top().first;
                i++;
            }
        }
          return result;
    }
};