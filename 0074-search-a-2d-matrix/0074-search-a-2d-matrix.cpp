class Solution {
public:
    bool solve(vector<int>&vec,int target){
        int i=0;
        int j=vec.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(vec[mid]==target){
                return true;
            }
            else if(vec[mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=matrix.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            int s=matrix[mid].size();
            if(matrix[mid][0]<=target && matrix[mid][s-1]>=target){
                return solve(matrix[mid],target);
            }
            else if(matrix[mid][s-1]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return false;
    }
};