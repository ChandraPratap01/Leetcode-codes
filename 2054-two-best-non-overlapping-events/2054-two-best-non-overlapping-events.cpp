class Solution {
public:
    int t[100001][3];
    int binary_search(vector<vector<int>>& events,int end){  //UPPER BOUND
        int i=0;
        int j=events.size()-1;
        int result=events.size();
        while(i<=j){
            int mid=(i+j)/2;
            if(events[mid][0]>end){
                result= mid;
                j=mid-1;
            }
            else if(events[mid][0]<=end){
                i=mid+1;
            }
        }
        return result;
    }
    
    int solve(int idx,int count,vector<vector<int>>& events,int n){
        if(count==2 || idx>=n){
            return 0;
        }
        if(t[idx][count]!=-1){
            return t[idx][count];
        }
        int nextvalididx=binary_search(events,events[idx][1]);
        int take=events[idx][2]+solve(nextvalididx,count+1,events,n);
        int not_take=solve(idx+1,count,events,n);
        return t[idx][count]= max(take,not_take);
    }
    
    int maxTwoEvents(vector<vector<int>>& events) {
        int n=events.size();
        memset(t,-1,sizeof(t));
       sort(events.begin(),events.end());
       return solve(0,0,events,n);
    }
};