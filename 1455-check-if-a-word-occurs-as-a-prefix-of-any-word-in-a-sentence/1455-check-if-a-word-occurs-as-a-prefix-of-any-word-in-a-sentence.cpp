class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream stream(sentence);
        string str;
        int idx=1;
        while(stream>>str){
         if(str.substr(0,searchWord.size())==searchWord){
            return idx;
        }
            idx++;
        }
        return -1;
    }
};