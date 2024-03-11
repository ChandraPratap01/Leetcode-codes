class Solution {
public:
    string customSortString(string order, string s) {
        int array[26]={0};
        for(char &ch:s){
            array[ch-'a']++;
        }
        string result= "";
        for(char &ch:order){
            while(array[ch-'a']--){
                result.push_back(ch);
            }
        }
        for(char &ch:s){
            if(array[ch-'a']>0){
                 result.push_back(ch);
            }
        }
        return result;
    }
};