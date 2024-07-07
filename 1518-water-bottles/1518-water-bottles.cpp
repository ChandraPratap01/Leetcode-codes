class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int consumed=numBottles;
        int empty=numBottles;
        while(empty>=numExchange){
            int extrafullwater=empty/numExchange;
             int remain=empty%numExchange;
            consumed+=extrafullwater;
            empty=extrafullwater+remain;
                
        }
        return consumed;
    }
};