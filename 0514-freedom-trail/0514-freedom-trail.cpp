class Solution {
public:
    int count(int ringidx,int i,int s){
        int anticlock=abs(i-ringidx);
        int clockwise=s-anticlock;
        return min(anticlock,clockwise);
    }
    int findRotateSteps(string ring, string key) {
            int n=ring.length();
            int m=key.length();
        vector<vector<int>>t(n+1,vector<int>(m+1,INT_MAX));
        for(int ringidx=0;ringidx<n;ringidx++){
            t[ringidx][m]=0;
        }
        for(int keyidx=m-1;keyidx>=0;keyidx--){
            for(int ringidx=0;ringidx<n;ringidx++){
                int result=INT_MAX;
        for(int i=0;i<n;i++){
            if(ring[i]==key[keyidx]){
                int totalstep=count(ringidx,i,n)+1+t[i][keyidx+1];
                result=min(result,totalstep);
            }
        }
        t[ringidx][keyidx]=result;
            }
        }
        return t[0][0];
        }
};