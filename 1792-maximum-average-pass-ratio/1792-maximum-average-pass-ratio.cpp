class Solution {
public:
    #define P pair<double,int>
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n=classes.size();
        priority_queue<P>pq;
        for(int i=0;i<n;i++){
            double ratio=(double)classes[i][0]/classes[i][1];
            double Fratio=(double)(classes[i][0]+1)/(classes[i][1]+1);
            pq.push({Fratio-ratio,i});
        }
        while(extraStudents--){
            auto it=pq.top();
            pq.pop();
            int idx=it.second;
            classes[idx][0]++;
            classes[idx][1]++;
            double ratio=(double)classes[idx][0]/classes[idx][1];
            double Fratio=(double)(classes[idx][0]+1)/(classes[idx][1]+1);
            pq.push({Fratio-ratio,idx});
        }
        double result=0.0;
        for(int i=0;i<n;i++){
            result+=(double)classes[i][0]/classes[i][1];
        }
        return result/n;
    }
};