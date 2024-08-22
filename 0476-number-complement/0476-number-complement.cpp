class Solution {
public:
    int findComplement(int num) {
        int numbit=(int)(log2(num)+1);
        unsigned int mask=(1U<<numbit)-1;
         return num^mask;
    }
};