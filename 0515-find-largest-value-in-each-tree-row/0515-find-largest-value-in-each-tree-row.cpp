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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<int>result;
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty()){
            int n=que.size();
            int val=INT_MIN;
            while(n--){
                TreeNode* top=que.front();
                que.pop();
                if(val<top->val){
                    val=top->val;
                }
                if(top->right){
                    que.push(top->right);
                }
                if(top->left){
                    que.push(top->left);
                }
            }
            result.push_back(val);
        }
        return result;
    }
};