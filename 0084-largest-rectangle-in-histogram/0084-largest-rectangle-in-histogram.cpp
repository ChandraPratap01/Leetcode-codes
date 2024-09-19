class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        int result=0;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
               int curr=st.top();
                st.pop();
                int prevsmall=(st.empty())?-1:st.top();
                result=max(result,((i-prevsmall)-1)*heights[curr]);
            }
            st.push(i);
        }
        while(!st.empty()){
            int curr=st.top();
            st.pop();
            if(!st.empty()){
               int prev=st.top();
                result=max(result,((n-prev)-1)*heights[curr]);
            }else{
                int prev=-1;
                 result=max(result,((n-prev)-1)*heights[curr]);
            }
        }
        return result;
    }
};