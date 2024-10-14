class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq(nums.begin(),nums.end());
        long long sum=0;
        while(k-- && !pq.empty()){
            int a=pq.top();
            pq.pop();
            sum+=a;
            pq.push(ceil(a/3.0 ));
        }
        return sum;
    }
};