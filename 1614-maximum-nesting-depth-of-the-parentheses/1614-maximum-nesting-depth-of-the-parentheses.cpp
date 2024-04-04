class Solution {
public:
    int maxDepth(string s) {
        int result=INT_MIN;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                st.pop();
            }
          result=max(result,static_cast<int>(st.size()));
        }
        return result;
    }
};