class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result;
        int j=0;
        for(int i=0;i<spaces.size();i++){
            while(j<s.size()){
             if(j==spaces[i]){
               result+=' '; 
               break;
             }
             result+=s[j];
             j++;
            }  
        }
        if(j<s.size()){
            result+=s.substr(j,s.size()-j);
        }
         return result;
    }
};