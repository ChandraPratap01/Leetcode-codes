class Solution {
public:
    string makeGood(string s) {
        string result="";
        result.push_back(s[0]);
        for(int i=1;i<s.length();i++){

            if( !result.empty() && (result.back()-32==s[i] || result.back()+32==s[i])){
               result.pop_back(); 
            }
            else{
                result.push_back(s[i]);
            }
        }
        return result;
    }
};