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
    ListNode* insertionSortList(ListNode* head) {
        if(head->next==NULL){
            return head;
        }
       for(ListNode*curr=head;curr!=NULL;curr=curr->next){
          for(ListNode*curr2=head;curr2!=curr;curr2=curr2->next){
              if(curr->val<curr2->val){
                 int temp=curr->val;
                  curr->val=curr2->val;
                  curr2->val=temp; 
              }
          } 
       }     
        return head;
    }
};