class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       for(int i=0;i<words.size();i++){
           int s=words[i].size();
           if(equal(words[i].begin(),words[i].begin()+s/2,rbegin(words[i]))){
               return words[i];
           }
       }
        return "";
    }
};