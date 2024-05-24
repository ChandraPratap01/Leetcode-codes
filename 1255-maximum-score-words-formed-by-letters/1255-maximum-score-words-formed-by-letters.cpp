class Solution {
public:
    int maxscore;
    int n;
    void solve(int i,vector<int>& score,vector<string>& words,int currsum, vector<int>&freq){
        maxscore=max(maxscore,currsum);
        if(i>=n){
            return;
        }
        vector<int>temp=freq;
        int j=0;
        int result=0;
        while(j<words[i].size()){
            char ch=words[i][j];
            temp[ch-'a']--;
            if(temp[ch-'a']>=0){
                result+=score[ch-'a'];
            }
            else{
                break;
            }
            j++;
        }
        if(j==words[i].size()){
            //TAKE
            solve(i+1,score,words,currsum+result,temp);
        }
        // NO TAKE
        solve(i+1,score,words,currsum,freq);
        
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        n=words.size();
            vector<int>freq(26,0);
        for(char &ch:letters){
            freq[ch-'a']++;
        }
        maxscore=INT_MIN;
        solve(0,score,words,0,freq);
        return maxscore;
    }
};