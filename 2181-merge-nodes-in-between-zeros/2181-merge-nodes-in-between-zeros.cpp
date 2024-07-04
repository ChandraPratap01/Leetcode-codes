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
        ListNode*temp=head;
        int sum=0;
        while(temp!=NULL){
            if(temp->val==0){
                sum=0;
            }
            else{
                sum=0;
                while(temp->val!=0){
                     sum+=temp->val;
                    temp=temp->next;
                }
                temp1->next= new ListNode(sum);
                temp1=temp1->next;
            }
            temp=temp->next;
        }
        return dummy->next;
    }
};