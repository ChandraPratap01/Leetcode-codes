class Solution {
public:
    void solve(vector<char>&vc,stack<char>&st){
        while(st.top()!='('){
            char i=st.top();
            st.pop();
            vc.push_back(i);
        }
        st.pop();
        char oprator=st.top();
        st.pop();
        if(oprator=='&'){
            for(char &k:vc){
                if(k=='f'){
                   st.push('f');
                    return;
                }
            }
            st.push('t');
        }
        else if(oprator=='|'){
             for(char &k:vc){
                if(k=='t'){
                   st.push('t');
                    return;
                }
            }
             st.push('f');
        }
        else{
            if(vc[0]=='f'){
                st.push('t');
            }else{
                st.push('f');
            }
        } 
    }
    bool parseBoolExpr(string expression) {
         stack<char>st;
        for(char i:expression){
            if(i==')'){
                vector<char>vc;
                solve(vc,st);
            }
            else if(i!=','){
                st.push(i);
            }
        }
        return st.top()=='t';
    }
};