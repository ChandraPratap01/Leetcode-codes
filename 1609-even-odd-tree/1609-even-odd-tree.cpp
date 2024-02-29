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
    vector<int>currnode;
    bool solve(TreeNode*root,int level){
        if(root==NULL){
            return true;
        }
        if(level%2==root->val%2){
            return false;
        }
        if(level>=currnode.size()){
            currnode.resize(level+1);
        }
        if(currnode[level]!=0){
            if((level%2==0 && currnode[level]>=root->val)|| (level%2!=0 && currnode[level]<=root->val)){
               return false; 
            }
        }
        currnode[level]=root->val;
        return solve(root->left,level+1)&&solve(root->right,level+1);
    }
    bool isEvenOddTree(TreeNode* root) {
        return solve(root,0);  
    }
};