class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto mycomparator=[](int &i,int &j){
            if(to_string(i)+to_string(j)>to_string(j)+to_string(i)){
                return true;
            }else{
                return false;
            }
        };
       sort(nums.begin(),nums.end(),mycomparator);
        if(nums[0]==0){
            return "0";
        }
        string result="";
        for(int i=0;i<nums.size();i++){
            result+=to_string(nums[i]);
        }
        return result;
    }
};