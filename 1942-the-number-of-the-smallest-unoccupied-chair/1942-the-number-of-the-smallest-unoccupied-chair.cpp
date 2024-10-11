class Solution {
public:
    typedef pair<int,int>P;
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n=times.size();
        priority_queue<P,vector<P>,greater<P>>Occupied;
        priority_queue<int,vector<int>,greater<int>>Free;
        int  friendarrival=times[targetFriend][0];
        sort(times.begin(),times.end());
        int count=0;
        for(int i=0;i<n;i++){
            int arrival=times[i][0];
            int leaving=times[i][1];
            while(!Occupied.empty() && Occupied.top().first<=arrival){
                Free.push(Occupied.top().second);
                Occupied.pop();
            }
            if(Free.empty()){
                Occupied.push({leaving,count});
                
                if(arrival==friendarrival){
                    return count;
                }
                count++;
            }else{
                int leastchair=Free.top();
                Free.pop();
                 if(arrival==friendarrival){
                    return leastchair;
                }
                 Occupied.push({leaving,leastchair});
            }
            
        }
        return -1;
         
        
    }
};