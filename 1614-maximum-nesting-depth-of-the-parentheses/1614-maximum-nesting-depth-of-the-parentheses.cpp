class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int result=INT_MIN;
        for( char i:s){
            if(i=='('){
                count++;
            }
            else if(i==')'){
                count--;
            }
        result=max(result,count);
        }
        return result;
    }
};