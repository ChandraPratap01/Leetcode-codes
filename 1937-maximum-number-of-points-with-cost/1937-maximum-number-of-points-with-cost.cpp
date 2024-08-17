class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int r=points.size();
        int c=points[0].size();
        vector<long long>prev(c);
        for(int i=0;i<c;i++){
            prev[i]=points[0][i];
        }
        for(int i=1;i<r;i++){
            vector<long long>left(c,0);
             vector<long long>right(c,0);
            left[0]=prev[0];
            for(int j=1;j<c;j++){
                left[j]=max(prev[j],left[j-1]-1);
            }
            right[c-1]=prev[c-1];
            for(int j=c-2;j>=0;j--){
                right[j]=max(prev[j],right[j+1]-1);
            }
            vector<long long>curr(c);
            for(int j=0;j<c;j++){
                curr[j]=points[i][j]+max(left[j],right[j]);
            }
           prev = curr;
        }
        return *max_element(begin(prev),end(prev));
    }
};