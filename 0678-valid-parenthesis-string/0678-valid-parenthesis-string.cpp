class Solution {
public:
    bool checkValidString(string s) {
        stack<int>open;
        stack<int>special;
        
        for( int i=0;i<=s.length()-1;i++){
            if(s[i]=='('){
                open.push(i);
            }
            else if(s[i]=='*'){
                special.push(i);
            }
            else{
                if(!open.empty()){
                    open.pop();
                }
                else if(!special.empty()){
                    special.pop();
                }
                else{
                    return false;
                }
            }
        }
        while(!open.empty()&& !special.empty()){
            if(open.top()>special.top()){
                return false;
            }
                open.pop();
                special.pop();
        }
        return open.empty();
            
    }
};