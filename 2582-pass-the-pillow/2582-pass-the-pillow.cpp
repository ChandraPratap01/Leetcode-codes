class Solution {
public:
    int passThePillow(int n, int time) {
        int idx=1;
        while(time){
            while(idx<n){
               idx++;
                time--;
               if(time==0){
                return idx;
               }
            }
            while(idx>1){
                idx--;
                time--;
                if(time==0){
                    return idx;
                }
            }
            }
             return -1;
    }
};