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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefixsum = 0;
        ListNode* dummynode = new ListNode(0);
        dummynode->next = head;
        unordered_map<int, ListNode*> mp;
        mp[0] = dummynode;
        ListNode* current = head;
        ListNode* prev = dummynode;
        while (current != NULL) {
            prefixsum += current->val;
            if (mp.find(prefixsum) != mp.end()) {
                ListNode* start = mp[prefixsum];
                ListNode* temp = start->next;
                int psum = prefixsum;
                while (temp != current) {
                    psum += temp->val;
                    mp.erase(psum);
                    temp = temp->next;
                }
                start->next = current->next;
            } else {
                mp[prefixsum] = current;
            }
            current = current->next;
        }
        return dummynode->next;
    }
};
