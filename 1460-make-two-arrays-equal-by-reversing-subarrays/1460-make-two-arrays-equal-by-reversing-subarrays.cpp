class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i:arr){
            mp[i]++;
        }
        for(int i=0;i<n;i++){
            if(mp[target[i]]>0){
                mp[target[i]]--;
                if(mp[target[i]]==0){
                    mp.erase(target[i]);
                }
            }else{
                return false;
            }
        }
        return true;
    }
};