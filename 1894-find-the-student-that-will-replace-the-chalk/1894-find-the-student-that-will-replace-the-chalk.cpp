class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n=chalk.size();
        long long sum=0;
       for(int i=0;i<n;i++){
           sum+=chalk[i];
       } 
        sum=k%sum;
        for(int i=0;i<n;i++){
            if(chalk[i]<=sum){
                sum-=chalk[i];
            }
            else{
                return i;
            }
        }
        return -1;
    }
};