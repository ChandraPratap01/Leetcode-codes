class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       queue<int>que;
        int count=0;
        for(int i=0;i<tickets.size();i++){
            que.push(i);
        }
       while(tickets[k]!=0){
           int a=que.front();
           que.pop();
           if(tickets[a]>0){
              tickets[a]--; 
               que.push(a);
               count++;
           }
       }
        return count;
    }
};