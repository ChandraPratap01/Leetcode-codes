/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>result(m,vector<int>(n,-1));
        int left=0,right=n-1,top=0,bottom=m-1;
        while(head!=NULL && left<=right && top<=bottom){
            for(int k=left;k<=right && head!=NULL ;k++){
                result[top][k]=head->val;
                head=head->next;
                }
            top++;
            for(int i=top;i<=bottom && head!=NULL;i++ ){
                result[i][right]=head->val;
                head=head->next;
                 }
            right--;
            for(int l=right;l>=0 && head!=NULL ;l-- ){
                 if(result[bottom][l]==-1){
                result[bottom][l]=head->val;
                head=head->next;
                      }
            }
            bottom--;
            for(int d=bottom;d>=0 && head!=NULL;d--){
                if(result[d][left]==-1){
                    result[d][left]=head->val;
                        head=head->next;
                     }
            }   
            left++;
    }
        return result;
    }
};