class Solution {
public:
   int t[1001][1001];
    bool palindrome( int i,int j,string s){
        if(i>j){
                 return true;

        }
            if(t[i][j]!=-1){
                return t[i][j];
            }
            if(s[i]==s[j]){
              return t[i][j]=palindrome( i+1,j-1,s);
            }
               return t[i][j]=false;
            
        
    }
    int countSubstrings(string s) {
        int count=0;
        memset(t,-1,sizeof(t));
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                bool check;
                if(i==j){
                 count++;
                }
                else{
                   check= palindrome(i,j,s) ;
                    if(check==true){
                        count++;
                    }
                       
                }
           }
        }
        return count;
    }
};