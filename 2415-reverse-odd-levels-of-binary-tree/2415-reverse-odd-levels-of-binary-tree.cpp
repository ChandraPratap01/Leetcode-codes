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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>que;
        que.push(root);
        int level=0;
        while(!que.empty()){
            int n=que.size();
            vector<TreeNode*>vec;
            while(n--){
                TreeNode*temp=que.front();
                que.pop();
                vec.push_back(temp);
                if(temp->right){
                    que.push(temp->right);
                }
                if(temp->left){
                    que.push(temp->left);
                }
            }
            if(level%2!=0){
                int i=0;
                int j=vec.size()-1;
                while(i<j){
                    int temp=vec[i]->val;
                    vec[i]->val=vec[j]->val;
                    vec[j]->val=temp;
                    i++;
                    j--;
                }
            }
            level++;
        }
        return root;
    }
};