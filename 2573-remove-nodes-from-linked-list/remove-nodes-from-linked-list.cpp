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

        ListNode* curr = head;
        ListNode* prev = NULL;
        // reversion the linked list
        while (curr != NULL) {
            ListNode* temp = curr->next;

            curr->next = prev;
            prev = curr;

            curr = temp;
        }

        ListNode dummy(0);
        dummy.next = prev;
        curr = &dummy;
        int maxVal = INT_MIN;

        while (curr->next) {
            if (curr->next->val < maxVal) {
                curr->next = curr->next->next;
            } else {
                maxVal = curr->next->val;
                curr = curr->next;
            }
        }

        curr = dummy.next;
        prev = NULL;
        // reversion the linked list
        while (curr != NULL) {
            ListNode* temp = curr->next;

            curr->next = prev;
            prev = curr;

            curr = temp;
        }

        return prev;
    }
};