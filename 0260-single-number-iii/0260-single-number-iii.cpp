class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xor_=0;
        for(int &num:nums){
            xor_^=num;
        }
     //   mask->right most bit(1) search;
        int mask=xor_ &(-xor_);
        int groupA=0;
        int groupB=0;
        for(int &num:nums){
            if(num&mask){
                groupA^=num;
            }else{
                groupB^=num;
            }
        }
        return {groupA,groupB};
    }
};