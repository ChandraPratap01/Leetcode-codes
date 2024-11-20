class Solution {
public:
    int takeCharacters(string s, int k) {
        int result=0;
        int S=s.size();
        vector<int>freq(3,0);
        for(int i=0;i<S;i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<3;i++){
            if(freq[i]<k){
                return -1;
            }
        }
         int i=0;
        int j=0;
        while(j<S){
       if(freq[s[j]-'a']-1<k){
                 freq[s[i]-'a']++;
                 i++; 
           }
            else{
         freq[s[j]-'a']--;
        result=max(result,j-i+1);
         j++;
        }
        }
        return S-result;
        }
};