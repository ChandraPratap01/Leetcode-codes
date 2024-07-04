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
    ListNode* mergeNodes(ListNode* head) {
     ListNode*dummy=new ListNode(0);
        ListNode*temp1=dummy;
        int sum=0;
        head=head->next;
        while(head!=NULL){
                sum=0;
                while(head!=NULL && head->val!=0){
                     sum+=head-> val;
                    head=head->next;
                }
                temp1->next= new ListNode(sum);
                temp1=temp1->next;
            if(head!=NULL){
                head=head->next;
            }
            }
          return dummy->next;
        }
};