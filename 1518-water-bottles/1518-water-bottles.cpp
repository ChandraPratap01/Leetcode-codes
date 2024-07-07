class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int consumed_water=0;
        int emptywater=0;
        while(numBottles>=numExchange){
            consumed_water+=numExchange;
             numBottles-=numExchange;
            numBottles+=1;
        }
        return consumed_water+numBottles;
    }
};