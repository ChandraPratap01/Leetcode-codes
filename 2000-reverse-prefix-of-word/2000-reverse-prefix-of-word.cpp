class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int i=0;
        int j;
        for(j=0;j<n;j++){
            if(word[j]==ch){
                break;
            }  
        }
        if(j==n){
            return word;
        }
        while(i<=j){
            char s=word[j];
            word[j]=word[i];
            word[i]=s;
            i++;
            j--;
        }
        return word;
    }
};