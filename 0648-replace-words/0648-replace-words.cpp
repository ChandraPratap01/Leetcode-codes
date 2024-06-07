class Solution {
public:
    string append(unordered_set<string>st,string word){
        for(int i=1;i<word.size();i++){
            string check=word.substr(0,i);
            if(st.count(check)){
                return check;
            }
            
        }
        return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string>st(dictionary.begin(),dictionary.end());
        stringstream ss(sentence);
        string word;
        string result;
        while(getline(ss,word,' ')){
            result+=append(st,word);
            result+=' ';
        }
        result.pop_back();
        return result;
    }
};