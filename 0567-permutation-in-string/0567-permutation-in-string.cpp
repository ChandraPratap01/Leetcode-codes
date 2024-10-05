class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n=s1.size();
        int s=s2.size();
        if(n>s){
            return false;
        }
        sort(s1.begin(),s1.end());
        for(int i=0;i<=s2.size()-n;i++){
            string check=s2.substr(i,n);
            sort(check.begin(),check.end());
            if(check==s1){
                return true;
            }
            }
        return false;
    }
};