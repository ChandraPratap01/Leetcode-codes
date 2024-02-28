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
    int findBottomLeftValue(TreeNode* root) {
         queue<TreeNode*>que;
        int result;
        que.push(root);
        while(!que.empty()){
            for(auto i=0;i<que.size();i++){
                TreeNode* j=que.front();
                que.pop();
                if(j->right){
                que.push(j->right);
                }
                if(j->left){
                que.push(j->left);   
            }   
        }
        TreeNode*l=que.back();
            result=l->val;
    }
        return result;
    }
};