class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>vc(n,0);
        for(auto &vec:edges){
            int strong=vec[0];
            int weak=vec[1];
            vc[weak]++;
        }
        int count=0;
        int value;
       for(int i=0;i<n;i++){
            if(vc[i]==0){
                count++;
                value=i;
            }
        }
        if(count==1){
            return value;
        }
        return -1;
    }
};