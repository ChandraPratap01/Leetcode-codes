class Solution {
public:
    vector<string>gettoken(string version){
        stringstream ss(version);
        string token="";
        vector<string>tokens;
        while(getline(ss,token,'.')){
            tokens.push_back(token);
        }
        return tokens;
    }
    int compareVersion(string version1, string version2) {
        vector<string>s1=gettoken(version1);
        vector<string>s2=gettoken(version2);
        int m=s1.size();
        int n=s2.size();
        int i=0;
        while(i<m||i<n){
          int a=  i<m? stoi(s1[i]):0;
            int b=  i<n?stoi(s2[i]):0;
            if(a<b){
                return -1;
            }
            else if(a>b){
                return 1;
            }
            else{
                i++;
            }
        }
        return 0;
    }
};