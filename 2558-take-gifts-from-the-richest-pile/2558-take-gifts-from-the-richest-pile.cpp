class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       priority_queue<int> pq;  
        for(int i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }
        while(k-- ){
            int a=floor(sqrt(pq.top()));
            pq.pop();
            pq.push(a);
        }
        long long result=0;
        while(!pq.empty()){
            result+=pq.top();
            pq.pop();
        }
        return result;
    }
};