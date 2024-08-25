class Solution {
public:
    long solve(long firsthalf,bool iseven){
        long resultnum=firsthalf;
        if(iseven==false){
           firsthalf/=10;
        }
        while(firsthalf>0){
            int digit=firsthalf%10;
            resultnum=(resultnum*10)+digit;
            firsthalf/=10;
        }
        return resultnum;
    }
    string nearestPalindromic(string n) {
        int N=n.length();
        int len=N/2;
        int  halfint=(N%2==0)?len:(len+1);
        long firsthalf=stol(n.substr(0,halfint));
        
        vector<long>possiblitity;
        possiblitity.push_back(solve(firsthalf,N%2==0));
         possiblitity.push_back(solve(firsthalf+1,N%2==0));
         possiblitity.push_back(solve(firsthalf-1,N%2==0));
         possiblitity.push_back((long)pow(10,N)+1);
         possiblitity.push_back((long)pow(10,N-1)-1);
        long diff=LONG_MAX;
        long originalnumber=stol(n);
        long result=LONG_MAX;
        for(long num:possiblitity){
            if(num==originalnumber){
                continue;
            }
        if(abs(num-originalnumber)<diff){
            diff=abs(num-originalnumber);
            result=num;
        }
        else if(abs(num-originalnumber)==diff){
            result= min(result,num);
        }    
        }
        return to_string(result);
    }
};