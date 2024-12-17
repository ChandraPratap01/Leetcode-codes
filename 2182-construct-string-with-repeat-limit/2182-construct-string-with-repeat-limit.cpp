class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int>Count(26,0);
       for(char &ch:s){
           Count[ch-'a']++;
       }
        string result="";
        int i=25;
       while(i>=0){
            if(Count[i]==0){
                i--;
                continue;
            }
           char ch='a'+i;
           int freq=min(Count[i],repeatLimit);
            result.append(freq,ch);
            Count[i]=Count[i]-freq;
           if(Count[i]>0){
               int j=i-1;
              while(j>=0 && Count[j]==0){
                  j--;
              }
               if(j<0){
                   break;
               }
               result.push_back('a'+j);
               Count[j]--;
           }
        }
        return result;
    }
};