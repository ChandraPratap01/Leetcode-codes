class Solution {
public:
    bool possible(vector<int> position,int mid,int m){
        int prevball=position[0];
        int countball=1;
        for(int i=1;i<position.size();i++){
            if(position[i]-prevball>=mid){
                countball++;
                prevball=position[i];
            }
            if(countball==m){
                break;
            }
        }
        return countball==m;
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int minforce=1;
        int maxforce=position[n-1]-position[0];
        int result=0;
        while(minforce<=maxforce){
            int midmax=minforce+(maxforce-minforce)/2;
            if(possible(position,midmax,m)){
                result=midmax;
                minforce=midmax+1;
            }
            else{
                maxforce=midmax-1;
            }
        }
         return result;       
    }
};