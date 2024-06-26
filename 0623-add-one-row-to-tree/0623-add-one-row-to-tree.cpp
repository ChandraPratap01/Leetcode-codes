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
    TreeNode*add(TreeNode* root,int val,int depth,int curr){
        if(root==NULL){
            return NULL;
        }
        if(curr==depth-1){
            TreeNode* leftroot=root->left;
            TreeNode* rightroot=root->right;
            root->left=new TreeNode(val);
            root->right=new TreeNode(val);
            root->left->left=leftroot;
            root->right->right=rightroot;
            return root;
        }
        root->left=add(root->left,val,depth,curr+1);
        root->right=add(root->right,val,depth,curr+1);
        return root;
        
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
       if(depth==1){
           TreeNode* node=new TreeNode(val);
           node->left=root;
           return node;
       }
        int curr=1;
        return add(root,val,depth,curr);
    }
};