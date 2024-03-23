/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode*curr;
    bool solve(ListNode*head){
        if(head==NULL){
            return true;
        }
        bool ans=solve(head->next);
            if(curr->val !=head->val){
                return false;
            }
            curr=curr->next;
         return ans;
        }

    bool isPalindrome(ListNode* head) {
    curr=head;
   return solve(head);
    }
};