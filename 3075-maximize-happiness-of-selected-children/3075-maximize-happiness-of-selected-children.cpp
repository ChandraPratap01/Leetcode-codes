class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        int result=INT_MIN;
        long long int answer=0;
        int count=0;
        for(int i=0;i<k;i++){
            result=max(result,happiness[i]-count);
            answer+=result;
            result=0;
            count++;
        }
        return answer;
    }
};