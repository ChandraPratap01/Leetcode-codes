class Solution {
public:
    typedef long long ll;
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        ll sum=0;
        int count=0;
        int minvalue=INT_MAX;
        for(ll num:nums){
            if((num^k)>num){
                sum+=num^k;
                count++;
            }
            else{
                sum+=num;
            }
            minvalue=min((long long)minvalue,abs(num-(num^k)));
        }
        if(count%2==0){
            return sum;
        }
        else{
            return sum-minvalue;
        }
    }
};