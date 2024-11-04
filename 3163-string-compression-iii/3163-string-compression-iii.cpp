class Solution {
public:
    string compressedString(string word) {
        string comp="";
        int i=0;
        while(i<word.size()){
            char ch=word[i];
            int count=0;
            while(i<word.size() && count<9 && word[i]==ch){
                count++;
                i++;
            }
            comp+=to_string(count)+ch;
        }
        return comp;
        
    }
};