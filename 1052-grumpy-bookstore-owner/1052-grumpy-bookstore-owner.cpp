class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int result=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]!=1){
                result+=customers[i];
            }
        }
        int answer=result;
        int i=0;
        int j=0;
        int store=0;
        for( i=0;i<n;i++){
            j=i;
            store=result;
            while(j<n && j-i<=minutes-1 ){
                if(grumpy[j]==1){
                    store+=customers[j];
                }
                j++;
            }
            answer=max(answer,store);
        }
          return answer;      
        }
};