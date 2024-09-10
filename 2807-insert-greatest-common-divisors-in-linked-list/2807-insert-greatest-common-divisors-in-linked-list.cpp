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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*temp=head;
        while(temp->next!=NULL){
            ListNode*nxtnode=temp->next;
            int node=gcd(temp->val,temp->next->val);
            ListNode*newNode=new ListNode(node);
            temp->next=newNode;
            newNode->next=nxtnode;
            temp=nxtnode;
        }
        return head;
    }
};