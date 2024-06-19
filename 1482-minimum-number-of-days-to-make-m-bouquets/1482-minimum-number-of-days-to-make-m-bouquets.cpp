class Solution {
public:
    int canmakebouquets(vector<int>bloomDay,int k,int mid){
        int streak=0;
        int bouquetcount=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                streak++;
            }
            else{
                streak=0;
            }
            if(streak==k){
                bouquetcount++;
                streak=0;
            }
        }
        return bouquetcount;    
    }
        int minDays(vector<int>& bloomDay, int m, int k) {
        
        int start=0;
        int end_= *max_element(begin(bloomDay),end(bloomDay));
        int minday=-1;
        while(start<=end_){
            int mid=start+(end_-start)/2;
            if(canmakebouquets(bloomDay,k,mid)>=m){
                minday=mid;
                end_=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return minday;
    }
};