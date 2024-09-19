class Solution {
public:
    vector<int>solve( string expression){
        vector<int>Result;
        for(int i=0;i<expression.size();i++){
            if(expression[i]=='*' || expression[i]=='-' || expression[i]=='+'){
                vector<int>left=solve(expression.substr(0,i));
                vector<int>right=solve(expression.substr(i+1));
                for(int &a:left){
                    for(int &b:right){
                        if(expression[i]=='*'){
                            Result.push_back(a*b);
                        }else if(expression[i]=='-'){
                            Result.push_back(a-b);
                        }else{
                            Result.push_back(a+b);
                        }
                    }
                }
            }
        }
        if(Result.empty()){
          Result.push_back(stoi(expression));
        }return Result;
    }
    vector<int> diffWaysToCompute(string expression) {
      return solve(expression);  
    }
};