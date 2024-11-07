class Solution {
public:
    int largestCombination(vector<int>& candidates) {
         int val=INT_MIN;
        for(int i=0;i<=24;i++){
           int count=0;
            for(int j=0;j<candidates.size();j++){
                if(candidates[j]&(1<<i)){
                    count++;
                }
            }
              val=max(val,count);
        }
        return val;
    }
};