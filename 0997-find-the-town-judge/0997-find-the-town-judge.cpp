class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1){
            return n;
        }
        vector<int>mp(n+1,0);       
        vector<int>vc(n+1,0);
        for(auto i:trust){
            mp[i[0]]++;
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