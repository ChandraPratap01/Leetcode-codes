class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int result=0;
        for(int i=1;i<prices.size();i++){
            if(minprice>prices[i]){
                minprice=prices[i];
            }
            else{
                int diff=prices[i]-minprice;
                result=max(result,diff);
            }
        }
        return result;
    }
};