/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>que;
        que.push(root);
        bool evenlevel=true;
        while(!que.empty()){
            int n=que.size();
            int prev;
            if(evenlevel){
                prev=INT_MIN;
            }
            else{
                prev=INT_MAX;
            }
            while(n--){
                TreeNode*curr=que.front();
                que.pop();
                if(evenlevel && (curr->val%2==0 || curr->val<=prev) ){
                    return false;
                }
                if(!evenlevel && (curr->val%2!=0 || curr->val>=prev) ){
                    return false;
                }
                if(curr->left){
                    que.push(curr->left);
                } 
                if(curr->right){
                    que.push(curr->right);
                }
                prev=curr->val;
            }
            evenlevel=!evenlevel; 
        }
        return true;
                
    }
};