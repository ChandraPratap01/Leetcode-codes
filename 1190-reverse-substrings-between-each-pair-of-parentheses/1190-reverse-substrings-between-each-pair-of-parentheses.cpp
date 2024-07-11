class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>openbrket;
        string result;
        for(char &i:s){
            if(i== '(' ){
           openbrket.push(result.size());
            }
            else if(i==')'){
             int a=openbrket.top();
             openbrket.pop();
             reverse(result.begin()+a,result.end());
            }
            else{
                result+=i;
            }
        }
        return result;
    }
};