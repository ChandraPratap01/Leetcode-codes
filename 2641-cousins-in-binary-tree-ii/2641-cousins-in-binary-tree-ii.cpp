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
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<TreeNode*>que;
        que.push(root);
        vector<int>vc;
        // STEP ONE STORE ALL LEVEL SUM IN VECTOR
        while(!que.empty()){
            int levelsum=0;
            int s=que.size();
            while(s--){
                TreeNode*top=que.front();
                que.pop();
                levelsum+=top->val;
                if(top->left){
                    que.push(top->left);
                }
                if(top->right){
                    que.push(top->right);
                }    
            }
            vc.push_back(levelsum);
        }
        //STEP-2 UPDATE THE NODE
        que.push(root);
        root->val=0;
        int index=1;
        while(!que.empty()){
            int s=que.size();
            while(s--){
            TreeNode*top=que.front();
            que.pop();
                int siblingsum=(top->left!=NULL)?top->left->val:0;
                siblingsum+=(top->right!=NULL)?top->right->val:0;
                if(top->left!=NULL){
                    top->left->val=vc[index]-siblingsum;
                    que.push(top->left);
                }
                if(top->right!=NULL){
                    top->right->val=vc[index]-siblingsum;
                    que.push(top->right);
                }
            }
            index++;
        }
        return root;
    }
};