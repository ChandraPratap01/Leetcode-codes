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
   int countlinklist(ListNode*head){
      int count=1;
       while(head->next!=NULL){
           head=head->next;
           count++;
       }
       return count;
   }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s=countlinklist(head);
        if(s==n){
            ListNode*temp=head->next;
            delete(head);
            return temp;
        }
        int travel=s-n;
         ListNode*temp=head;
        ListNode*prev=NULL;
        while(travel--){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete(temp); 
        return head;
    }
};