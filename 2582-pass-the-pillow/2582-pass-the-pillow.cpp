class Solution {
public:
    int passThePillow(int n, int time) {
        int fullround=time/(n-1);
        int roundleft=time % (n-1);
         if(fullround%2==0){
             return 1+roundleft;
         }
        else{
            return n-roundleft;
        }
        return -1;
    }
};