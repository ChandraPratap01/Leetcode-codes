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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        ListNode*curr=head;
        while(curr!=NULL){
            st.push(curr);
            curr=curr->next;
        }
        curr=st.top();
        st.pop();
        int maxval=curr->val;
        ListNode*result=new ListNode(curr->val);
        while(!st.empty()){
            curr=st.top();
            st.pop();
            if(curr->val<maxval){
                continue;
            }
            else{
                ListNode*result2=new ListNode(curr->val);
                result2->next=result;
                maxval=curr->val;
                result=result2;
            }
        }
        return result;
    }
};