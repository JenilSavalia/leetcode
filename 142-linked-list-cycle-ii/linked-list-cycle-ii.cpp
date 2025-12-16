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
    ListNode* detectCycle(ListNode* head) {

        ListNode* slow = head;
        unordered_map<ListNode*, int> mp;

        while (slow != NULL) {
            mp[slow]++;
            if (mp[slow] > 1) {
                return slow;
            }
            slow = slow->next;
        }

        return NULL;
    }
};