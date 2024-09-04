class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
       set<pair<int,int>>st;
        for(vector<int>&v:obstacles){
            int a=v[0];
            int b=v[1];
            st.insert({a,b});
        }
        pair<int,int>dir={0,1};
        int x=0;
        int y=0;
        int maxD=0;
        for(int i=0;i<commands.size();i++){
            if(commands[i]==-2){
                dir={-dir.second,dir.first};
            }
            else if(commands[i]==-1){
                dir={dir.second,-dir.first};
            }
            else{
                for(int j=0;j<commands[i];j++){
                  int newx=x+dir.first;
                    int newy=y+dir.second;
                    if(st.find({newx,newy})!=st.end()){
                        break;
                    }
                    x=newx;
                    y=newy;
                }
            }
            maxD=max(maxD,(x*x+y*y));
        }
        return maxD;
    }
};