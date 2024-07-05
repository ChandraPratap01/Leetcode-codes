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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode*prev=head;
        ListNode*curr=head->next;
        int i=1;
        int firstnode=0;
        int prevnode=0;
        int mindist=INT_MAX;
        while(curr->next!=NULL){
            if(curr->val>prev->val && curr->val>curr->next->val || curr->val<prev->val && curr->val<curr->next->val){
                if(prevnode==0){
                    prevnode=i;
                    firstnode=i;
                }
                else{
                    mindist=min(mindist,i-prevnode);
                    prevnode=i;
                }
                
            }
            i++;
            prev=curr;
            curr=curr->next;
        }
        if(mindist==INT_MAX){
            return {-1,-1};
        }
        else{
            return {mindist,prevnode-firstnode};
        }
    }
};