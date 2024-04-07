class Solution {
public:
    bool checkValidString(string s) {
        int open=0;
        int close=0;
        for(int i=0;i<=s.length()-1;i++){
            if(s[i]=='(' || s[i]=='*'){
                open++;
            }
            else{
                open--;
            }
            if(open<0){
                return false;
            }
        }
        for(int j=s.length()-1;j>=0;j--){
            if(s[j]==')' || s[j]=='*'){
                close++;
            }
            else{
                close--;
            }
            if(close<0){
                return false;
            }
        }
        return true;
    }
};