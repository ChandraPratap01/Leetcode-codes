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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long,vector<long>,greater<long>>pq;
        queue<TreeNode *>que;
        que.push(root);
        while(!que.empty()){
            int s=que.size();
            long sum=0;
            while(s--){
                TreeNode*top=que.front();
                que.pop();
                sum+=top->val;
                if(top->left){
                    que.push(top->left);
                }
                if(top->right){
                    que.push(top->right);
                }
            }
            pq.push(sum);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return (pq.size()<k)?-1:pq.top();
    }
};