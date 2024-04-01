class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int count=0;
        bool space=false;
        for(int j=n-1;j>=0;j--){
            if(s[j]!=' '){
                count++;
                 space=true;
            }
            else if(space){
                 break; 
            }    
    }
    return count;
    }
};