class Solution {
public:
    string converts(int value){
        bitset<32>binary(value);
        return binary.to_string();
    }
    int minBitFlips(int start, int goal) {
       string S1=converts(start);
        string S2=converts(goal);
        int count=0;
        for(int i=0;i<32;i++){
            if(S1[i]!=S2[i]){
                count++;
            }
        }
        return count;
    }
};