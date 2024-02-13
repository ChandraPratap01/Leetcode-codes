class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string i:words){
            string a=i;
            reverse(a.begin(),a.end());
            if(a==i){
                return i;
            }
        }
        return "";
    }
};