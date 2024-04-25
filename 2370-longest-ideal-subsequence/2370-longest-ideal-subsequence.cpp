class Solution {
public:
    int longestIdealString(string s, int k) {
        int n=s.length();
        int answer=0;
        vector<int>result(26,0);
        for(int i=0;i<n;i++){
            int curr=s[i]-'a';
            int left=max(0,curr-k);
            int right=min(25,curr+k);
            int maxii=0;
            for(int  i=left;i<=right;i++){
                 maxii=max(maxii,result[i]);
            }
            result[curr]=maxii+1;
            answer=max(answer,result[curr]);
        }
        return answer;
    }
};