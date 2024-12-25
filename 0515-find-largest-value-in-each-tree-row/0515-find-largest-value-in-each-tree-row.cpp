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
    vector<int>DFS(TreeNode*root,int depth, vector<int>&result){
        if(root==NULL){
            return {};
        }
        if(result.size()==depth){
            result.push_back(root->val);
        }else{
            result[depth]=max(result[depth],root->val);
        }
        DFS(root->left,depth+1,result);
        DFS(root->right,depth+1,result);
        return result;
        
        
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int>result;
       return DFS(root,0,result);
        
    }
};