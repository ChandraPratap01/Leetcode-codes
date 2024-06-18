class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
         int n=difficulty.size();
        int m=worker.size();
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            vec.push_back({difficulty[i],profit[i]});
        }
        sort(vec.begin(),vec.end());
        for(int i=1;i<n;i++){
            vec[i].second=max(vec[i].second,vec[i-1].second);
        }
        int result=0;
        for(int i=0;i<m;i++){
            int workediff=worker[i];
            int l=0,r=vec.size();
            int maxprofit=0;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(vec[mid].first<=workediff){
                    maxprofit=max(maxprofit,vec[mid].second);
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            result+=maxprofit;
        }
        return result;
    }
};