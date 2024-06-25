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
    void inorder(TreeNode* root,vector<int>&value){
        if(root==NULL){
            return;
        }
        inorder(root->left,value);
        value.push_back(root->val);
        inorder(root->right,value);
    }
    void solve(TreeNode* root,vector<int>&value){
        if(root==NULL){
            return;
        }
        int sum=0;
        for(int i=value.size()-1;i>=0;i--){
            if(value[i]>=root->val){
                sum+=value[i];
            }
            else{
                break;
            }
        }
        root->val=sum;
        solve(root->left,value);
        solve(root->right,value);
        
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>values;
        inorder(root,values);
        solve(root,values);
        return root;
    }
};