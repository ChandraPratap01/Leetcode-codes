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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        ListNode*dummy=new ListNode(0);
        ListNode*head2=dummy;
        head2->next=head;
        int count=1;
        ListNode*temp=head;
        while(head->next!=nullptr){
        head=head->next;
        count++;
        }
        int index=count-n;
        if(index==0){
            return dummy->next->next;
        }
        int count2=1;
        while(temp!=nullptr){
           if(count2==index){
             temp->next=temp->next->next;
             break;
           }
           temp=temp->next;
           count2++;
        }
        return dummy->next;  

    }
};