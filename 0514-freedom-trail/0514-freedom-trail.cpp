class Solution {
public:
    int t[101][101];
    int count(int ringidx,int i,int s){
        int anticlock=abs(i-ringidx);
        int clockwise=s-anticlock;
        return min(anticlock,clockwise);
    }
    int solve(int ringidx,int keyidx,string &ring,string&key){
        if(keyidx==key.length()){
            return 0;
        }
        if(t[ringidx][keyidx]!=-1){
            return t[ringidx][keyidx];
        }
        int result=INT_MAX;
        for(int i=0;i<ring.length();i++){
            if(ring[i]==key[keyidx]){
                int totalstep=count(ringidx,i,ring.length())+1+solve(i,keyidx+1,ring,key);
                result=min(result,totalstep);
            }
        }
        return t[ringidx][keyidx]=result;
    }
    int findRotateSteps(string ring, string key) {
        memset(t,-1,sizeof(t));
        return solve(0,0,ring,key);
        }
};