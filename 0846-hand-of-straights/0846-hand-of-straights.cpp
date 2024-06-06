class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0){
            return false;
        }
        map<int,int>mp;
        for(int &i:hand){
            mp[i]++;
        }
        while(!mp.empty()){
            int a=mp.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(mp[a+i]>0){
                    mp[a+i]--;
                    if(mp[a+i]==0){
                        mp.erase(a+i);
                    }
                }
                else{
                    return false;
                }
                
            }
        }
        return true;
    }
};