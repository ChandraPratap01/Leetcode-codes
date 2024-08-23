class Solution {
public:
    string fractionAddition(string exp) {
        int num=0;
        int deno=1;
        int i=0;
        int n=exp.length();
        while(i<n){
            int currnum=0;
            int currdeno=0;
            bool isnegative=(exp[i]=='-');
            if(exp[i]=='-' || exp[i]=='+'){
               i++; 
            }
            while(i<n && isdigit(exp[i])){
                int val=exp[i]-'0';
               currnum=(currnum*10)+val;
                i++;
            }
            i++;
            while(i<n && isdigit(exp[i])){
                int val=exp[i]-'0';
               currdeno=(currdeno*10)+val;
                i++;
            }
            if(isnegative==true){
                currnum*=-1;
            }
            num=num*currdeno+currnum*deno;
            deno=deno*currdeno;
            int gcd=abs(__gcd(num,deno));
            num=num/gcd;
            deno=deno/gcd;
            
        }
        return to_string(num)+"/"+to_string(deno);
        
    }
};