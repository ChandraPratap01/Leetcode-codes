class Solution {
public:
    int n;
    int WIDTH;
    int t[1001][1001];
    int solve(vector<vector<int>>& books,int i,int remainingwidth,int maxht){
        if(i>=n){
            return maxht;
        }
        if(t[i][remainingwidth]!=-1){
            return t[i][remainingwidth];
        }
        int bookW=books[i][0];
        int bookH=books[i][1];
        int keep=INT_MAX;
        int skip=INT_MAX;
        //KEEPING BOOK IN SAME SELF;
        if(bookW<=remainingwidth){
            keep=solve(books,i+1,remainingwidth-bookW,max(maxht,bookH));
        }
        skip=maxht+solve(books,i+1,WIDTH-bookW,bookH);
        return t[i][remainingwidth]=min(skip,keep);
    }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
       n=books.size();
       WIDTH=shelfWidth;
        memset(t,-1,sizeof(t));
        int remainingwidth=shelfWidth;
        int  maxheight=0;
       return solve(books,0,remainingwidth,maxheight);
    }
};