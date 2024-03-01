class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int k=s.size();
        int j=0;
        int a=count(s.begin(),s.end(),'1');
        string result(k,'0');
        result[k-1]='1';
        a=a-1;
        while(a>0){
            result[j]='1';
            j++;
            a--;
        }
        return result;
        
        
    }
};