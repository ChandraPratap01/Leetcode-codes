/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode*solve(ListNode *headA, ListNode *headB){
        while(headA!=headB){
             headB=headB->next;
            headA=headA->next;
             if(headA==NULL || headB==NULL){
             return NULL;
         }
        }
        return headA;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1=0;
        int count2=0;
        ListNode*curr1=headA;
         ListNode*curr2=headB;
        while(curr1!=NULL){
           count1++;
            curr1=curr1->next;
        }
        
         while(curr2!=NULL){
           count2++;
             curr2=curr2->next;
        }
        int moved=0;
        if(count2>=count1){
            moved=count2-count1;
            while(moved--){
                headB=headB->next;
            }
            return solve(headA,headB);
        }else{
             moved=count1-count2;
            while(moved--){
                headA=headA->next;
            }
            return solve(headA,headB);
        }
        return NULL;
    }
};