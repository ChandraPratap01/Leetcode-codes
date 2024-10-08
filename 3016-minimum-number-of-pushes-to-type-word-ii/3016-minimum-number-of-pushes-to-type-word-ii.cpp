class Solution {
public:
    //I am sorting to give priority to the char which has highest frequency
    //Because I would want it to come first in any button(key)
    void sortFunc(string &word) {
        unordered_map<char, int> mp;
        
        for(const char &ch : word) {
            mp[ch]++;
        }
        
        auto lambda=[&](const char &ch1, const char &ch2){
            return mp[ch1] > mp[ch2];
        };
        
        sort(begin(word), end(word), lambda);
    }
    
    int minimumPushes(string word) {
        if(word.length() <= 8) {
            return word.length();
        }
        sortFunc(word);
        unordered_map<int, unordered_set<char>> myMap;
        unordered_map<char, pair<int, int>> mp; //char is stored in which key in myMap and at what position it came
        
        int result = 0 ;
        int assign = 2;
        
        for(char &ch : word) {
            if(assign > 9) {
                assign = 2;
            }
            
            
            if(mp.find(ch) == mp.end()) {
                myMap[assign].insert(ch);
                mp[ch]            = {assign, (int)myMap[assign].size()};
                
                result += mp[ch].second;
                assign++;
            } else {
                result += mp[ch].second;
            }
        }
        
        return result;
        
    }
};
