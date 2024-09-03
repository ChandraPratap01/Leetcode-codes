class Solution {
public:
    int getLucky(string s, int k) {
        int n=s.size();
        string numberstring="";
        for(char &i:s){
            int number=(i-'a')+1;
            numberstring+=(to_string(number));
        }
        int result;
        while(k--){
        result=0;
        for(char &i:numberstring){
            result+=i-'0';
        }
          numberstring=to_string(result);
        }
        return result;
    }
};