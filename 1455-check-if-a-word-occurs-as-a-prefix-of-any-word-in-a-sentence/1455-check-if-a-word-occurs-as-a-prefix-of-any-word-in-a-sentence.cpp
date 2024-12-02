class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream stream(sentence);
        string str;
        int idx=1;
        int k=0;
        int j=0;
        while(stream>>str){
           while(k<str.size() && j<searchWord.size()){
            if(str[k]==searchWord[j]){
             k++;
             j++;
             continue;
            }else{
                break;
            }
           }
           if(k>=searchWord.size()){
            return idx;
           }else{
           idx++;
           }
        }
        return -1;
    }
};