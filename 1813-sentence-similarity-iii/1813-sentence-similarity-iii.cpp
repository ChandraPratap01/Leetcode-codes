class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
       if(s1.size()<s2.size()){
           swap(s1,s2);
       }
        vector<string>vec1,vec2;
        stringstream ss1(s1);
        string token;
        while(ss1>>token){
            vec1.push_back(token);
        }
        stringstream ss2(s2);
        string poken;
        while(ss2>>poken){
            vec2.push_back(poken);
        }
        int i=0;
        int j=vec1.size()-1;
        int k=0;
        int l=vec2.size()-1;
        while(l>=k){
            if(vec2[k]==vec1[i]){
                i++;
                k++;
            }
            else if(vec2[l]==vec1[j]){
                j--;
                l--;
            }else{
                return false;
            }   
        }
        return true;
    }
};