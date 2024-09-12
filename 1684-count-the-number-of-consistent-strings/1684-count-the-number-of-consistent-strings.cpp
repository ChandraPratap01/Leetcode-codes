class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>st;
        for(int i=0;i<allowed.size();i++){
            st.insert(allowed[i]);
        }
        int count=0;
        for(int i=0;i<words.size();i++){
            bool check=true;
            for(int j=0;j<words[i].size();j++){
                if(st.find(words[i][j])==st.end()){
                    check=false;
                }
            }
            if(check==true){
                count++;
            }
            
        }
        return count;
    }
};