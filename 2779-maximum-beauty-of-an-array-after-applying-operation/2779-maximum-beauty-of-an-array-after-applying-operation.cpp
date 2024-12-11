class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        vector<pair<int,int>>vec;
        for(int i=0;i<nums.size();i++){
            int start=nums[i]-k;
            int end=nums[i]+k;
            vec.push_back({start,end});
        }
        sort(vec.begin(),vec.end());
        int result=1;
        int i=0;
        int j=1;
        while(j<nums.size()){
            if(vec[j].first<=vec[i].second){
                result=max(result,j-i+1);   
            }
            else{
                i++;
            }
            j++;
        }
        return result;
    }
};