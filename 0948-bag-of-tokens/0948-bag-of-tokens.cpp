class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int s=tokens.size();
        int maxscore=0;
        int score=0;
        sort(begin(tokens),end(tokens));
        int i=0;
        int j=s-1;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                score++;
                i++;
                maxscore=max(maxscore,score);
            }
            else if(score>=1){
                power+=tokens[j];
                score-=1;
                j--;
            }
            else{
                return maxscore;
            }
        }
        return maxscore;
    }
};