class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int row=box.size();
        int column=box[0].size();
        vector<vector<char>>reversed(column,vector<char>(row));
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                reversed[j][i]=box[i][j];
            }
        }
        for(vector<char>&vc:reversed){
            reverse(vc.begin(),vc.end());
        }
        for(int i=0;i<row;i++){
            for(int j=column-1;j>=0;j--){
                if(reversed[j][i]=='.'){
                    int k=j-1;
                    while(k>=0){
                        if(reversed[k][i]=='*'){
                            break;
                        }
                        else if(reversed[k][i]=='#'){
                            reversed[j][i]='#';
                            reversed[k][i]='.';
                            break;
                        }
                        k--;
                    }
                }
            }
        }
        return reversed;
    }
};