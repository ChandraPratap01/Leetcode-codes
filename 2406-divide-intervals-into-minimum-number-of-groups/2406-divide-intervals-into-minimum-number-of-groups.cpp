class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto &vec:intervals){
            int start=vec[0];
            int end=vec[1];
            if(!pq.empty() && pq.top()<start){
                pq.pop();
                pq.push(end);
            }else{
                pq.push(end);
            }
            
        }
        return pq.size();
    }
};