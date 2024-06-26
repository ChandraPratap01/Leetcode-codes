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
    void inorder(TreeNode* root, vector<int>&store){
        if(root==NULL){
            return;
        }
        inorder(root->left,store);
        store.push_back(root->val);
        inorder(root->right,store);
    }
        TreeNode*solve(int i,int j, vector<int>&store) {
            if(i>j){
                return NULL;
            }
            int mid=i+(j-i)/2;
              TreeNode*result=new TreeNode(store[mid]);
            result->left=solve(i,mid-1,store);
            result->right=solve(mid+1,j,store);
            return result;
        }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int>store;
        inorder(root,store);
        int i=0;
        int j=store.size()-1;
       return solve(i,j,store);
        
    }
};