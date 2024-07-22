class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        vector<pair<int,string>>vecpair;
        vector<string>result;
        for(int i=0;i<n;i++){
            pair<int,string>st=make_pair(heights[i],names[i]);
            vecpair.push_back(st);
        }
        sort(vecpair.begin(),vecpair.end(),[](const pair<int,string>&a,const pair<int,string>&b){
            return a.first>b.first;
        });
             for(auto &it:vecpair){
                 result.push_back(it.second);
             }
             return result;
    }
};