class Solution {
public:
    int nthUglyNumber(int n) {
       priority_queue<long long,vector<long long>,greater<long long>>pq;
        int count=1;
        unordered_set<long long>seen;
        seen.insert(1);
        if(n==1){
            return 1;
          }
        pq.push(1);
        while(count!=n){
            long long a=pq.top();
            pq.pop();
             count++;
          if(seen.find(a*2)==seen.end()){
            pq.push(a*2);
            seen.insert(a*2);
          }
           if(seen.find(a*3)==seen.end()){
            pq.push(a*3);
            seen.insert(a*3);
          }
            if(seen.find(a*5)==seen.end()){
            pq.push(a*5);
            seen.insert(a*5);
          }
        }
        return pq.top();
    }
};