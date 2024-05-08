class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string>vc(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[score[i]]=i;
        }
        sort(score.begin(),score.end(),greater<int>());
        for(int i=0;i<n;i++){
           if(i==0){
               vc[mp[score[i]]]="Gold Medal";
           } 
            else if(i==1){
                 vc[mp[score[i]]]="Silver Medal";
            }
            else if(i==2){
                vc[mp[score[i]]]="Bronze Medal";
            }
            else{
                vc[mp[score[i]]]=to_string(i+1);
            }
        }
        return vc;
    }
};