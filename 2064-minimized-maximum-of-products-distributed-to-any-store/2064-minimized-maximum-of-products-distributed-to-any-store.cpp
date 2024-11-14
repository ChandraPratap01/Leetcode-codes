class Solution {
public:
    bool possible_to_distribute(int mid,int s, vector<int>& quantities,int &n){
         int a=0;
        for(int i=0;i<s;i++){
          a += (quantities[i] + mid - 1) / mid;
        }
      if(a<=n){
          return true;
      }else{
          return false;
      }
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int s=quantities.size();
        int l=1;
        int r=*max_element(quantities.begin(),quantities.end());
        int result=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible_to_distribute(mid,s,quantities,n)){
                result=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return result;
    }
};