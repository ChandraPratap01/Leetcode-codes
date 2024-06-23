class Solution {
public:
    typedef pair<int,int>P;
    int longestSubarray(vector<int>& nums, int limit) {
        int n=nums.size();
        priority_queue<P,vector<P>>maxheap;
        priority_queue<P,vector<P>,greater<P>>minheap;    //space->O(n+n)
        int i=0;
        int j=0;
        int result=0;
        while(j<n){      //O(n*log(n))
            minheap.push({nums[j],j});
            maxheap.push({nums[j],j});
            while(maxheap.top().first-minheap.top().first>limit){
                 i=min(maxheap.top().second,minheap.top().second)+1;
                while(maxheap.top().second<i){
                    maxheap.pop();    // log(n)
                }
                while(minheap.top().second<i){
                    minheap.pop();    //log(n)
                }
            }
            result=max(result,j-i+1);
            j++;
        }
        return result;
    }
};