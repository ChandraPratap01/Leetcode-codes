class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
       unordered_set<int>st(arr1.begin(),arr1.end()) ;
        int result=0;
        for(int val:arr1){
            while(val>0){
                st.insert(val);
                val=val/10;
            }
        }
        for(int i=0;i<arr2.size();i++){
            int a=arr2[i];
            while(a>0){
                if(st.count(a)){
                    result=max(result,static_cast<int>(log10(a))+1);
                }
                a=a/10;
            }
        }
       return result; 
    }
};