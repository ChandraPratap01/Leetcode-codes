class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        vector<int>left_b(n,0);
        vector<int>right_a(n,0);
        int count_a=0;
        int count_b=0;
        for(int i=0;i<n;i++){
            left_b[i]=count_b;
            if(s[i]=='b'){
                count_b++;
            }
        }
         for(int i=n-1;i>=0;i--){
            right_a[i]=count_a;
            if(s[i]=='a'){
                count_a++;
            }
        }
        int result=INT_MAX;
        for(int i=0;i<n;i++){
            result=min(result,left_b[i]+right_a[i]);
        }
        return result;
    }
};