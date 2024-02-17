class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int>pq;
        int i=0;
        int s=heights.size();
        for(;i<s-1;i++){
            if(heights[i+1]<=heights[i]){
                continue;
            }
            int diff=heights[i+1]-heights[i];
            if(bricks>=diff){
                bricks-=diff;
                pq.push(diff);
            }
      else if(ladders>0){
                if(!pq.empty()){
                    int max_brick=pq.top();
                    if(max_brick>diff){
                        bricks+=max_brick;
                        bricks-=diff;
                        pq.pop();
                        pq.push(diff);
                    }
                }
                ladders--;
            }
     else{break;}
        
        }
        return i;
    }
};