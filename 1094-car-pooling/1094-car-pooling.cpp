class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
       vector<int>rt(1001,0);
        for(vector<int>vt:trips){
            int start=vt[1];
            int end=vt[2];
            rt[start]+=vt[0];
            rt[end]-=vt[0];
        }
        int sum=0;
        for(int i=0;i<1001;i++){
            sum+=rt[i];
            if(sum>capacity){
                return false;
            }
        }
        return true;
    }
};