class Solution {
public:
    int minChanges(string s) {
        int count=0;
        for(int i=0;i<s.size();i+=2){
            if( s[i]=='0' && s[i+1]=='1'){
                count++;
            }
            else if(s[i]=='1' && s[i+1]=='0'){
               count++;
            }
        }
        return count;
    }
};