class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1){
            return n;
        }
        unordered_map<int,int>mp;
        vector<int>vc(n+1);
        for(auto i:trust){
            mp[i[0]]=i[1];
            vc[i[1]]++;
        }
        for(int i=0;i<n+1;i++){
            if(vc[i]==n-1 && mp[i]==0){
                return i;
            }
        }
        return -1;

    }
};