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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
       ListNode*curr=head;
        int count=0;
        while(curr){
            curr=curr->next;
            count++;
        }
        int parts=count/k;
        int remain=count%k;
        vector<ListNode*>result(k,NULL);
        ListNode*curr2=head;
         ListNode*prev=NULL;
        for(int i=0;i<k;i++){
            result[i]=curr2;
            for(int j=1;j<=parts+(remain>0)?1:0;j++){
               prev=curr2;
              curr2=curr2->next;
            }
            if(prev!=NULL){
            prev->next=NULL;
            remain--;
            }
        }
        return result;
        
    }
};