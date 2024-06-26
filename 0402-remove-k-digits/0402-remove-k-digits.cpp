class Solution {
public:
    string removeKdigits(string num, int k) {
        string result="";  //STRING JUST ACTS LIKE A STACK AND WE CAN ALSO TAKE QUEUE
        int n=num.length();
        for(int i=0;i<n;i++){
            while(result.length()>0 && k>0 && result.back()>num[i]){
                result.pop_back();
                k--;
            }
            if(result.length()>0 || num[i]!='0'){
                result.push_back(num[i]);
            }
        }
        while( result.length()>0 && k>0){
            result.pop_back();
            k--;
        }
        if(result==""){
            return "0";
        }
        return result;
    }
};