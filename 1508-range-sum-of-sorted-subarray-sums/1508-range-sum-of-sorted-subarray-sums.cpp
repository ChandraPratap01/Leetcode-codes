class Solution {
public:
    int M=1e9+7;
    typedef pair<int,int>P;//{sum,index}
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        priority_queue<P,vector<P>,greater<P>>pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        int result=0;
        for(int i=1;i<=right;i++){
            auto it=pq.top();
            pq.pop();
            int sum=it.first;
            int idx=it.second;
            if(i>=left){
                result=(result+sum)%M;
            }
            int new_idx=idx+1;
            if(new_idx<n){
                P new_pair={sum+nums[new_idx],new_idx};
                pq.push(new_pair);
            }
        }
        return result;
    }
};