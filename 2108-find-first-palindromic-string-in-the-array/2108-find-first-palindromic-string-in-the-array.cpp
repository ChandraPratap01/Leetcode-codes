class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string i:words){
            if(i==string(rbegin(i),rend(i))){
                return i;
            }
        }
        return "";
    }
};