class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        int s=0;
        int e=n-1;
        int k=n-1;
        while(k>=0){
            int a=nums[s]*nums[s];
            int b=nums[e]*nums[e];
            if(a>b){
                result[k]=a;
                s++;   
            }
            else{
                result[k]=b;
                e--;
            }
            k--;
        }
        return result;
    }
};