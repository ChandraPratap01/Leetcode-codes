class Solution {
public:
    int trap(vector<int>& height) {
      stack<int>st;
        int n=height.size();
        int sum=0;
        for(int i=0;i<n;i++){
            while(!st.empty() && height[i]>height[st.top()]){
                int s=st.top();
                st.pop();
                if(st.empty()){
                    break;
                }
                 int diff = i - st.top() - 1; 
                 sum+= (min(height[st.top()], height[i]) - height[s])*diff;
               
            }
            st.push(i);
        }
        return sum;
    }
};