class Solution {
public:
    string makeFancyString(string s) {
        string result="";
        result.push_back(s[0]);
        int freq=0;
        for(int i=1;i<s.size();i++){
            
            if(result.back()==s[i]){
                freq++;
                if(freq>=2){
                   result.pop_back();
                }
            }else{
                freq=0;
            }
            
                 result.push_back(s[i]);
            
        }
        return result;
    }
};