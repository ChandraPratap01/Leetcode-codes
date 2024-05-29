class Solution {
public:
    void solve(string&s){
        int i=s.length()-1;
        while( i>=0  && s[i]!='0'){
            s[i]='0';
            i--;
        }
        if(i<0){
          s='1'+s; 
        }
        else{
        s[i]='1';
    }
    }
        
    int numSteps(string s) {
        int opr=0;
        while(s.length()>1){
            int i=s.length();
            if(s[i-1]=='0'){
                s.pop_back();
                
            }
            else{
            solve(s);  
                
            }
            opr++;
        }
        return opr;
    }
};