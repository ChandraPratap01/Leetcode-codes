class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        vector<int>Min(n);
        for(int it=0;it<n;it++){
            int hours=stoi(timePoints[it].substr(0,2));
            int min=stoi(timePoints[it].substr(3,5));
            Min[it]=(hours*60)+min;
        }
        sort(Min.begin(),Min.end());
        int result=INT_MAX;
        for(int i=1;i<n;i++){
            result=min(result,Min[i]-Min[i-1]);
        }
        return min(result,((24*60)-Min[n-1])+Min[0]);
    }
};