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

        if (head->next == NULL)
            return NULL;

        ListNode* fast = head;
        ListNode* slow = head;

        for (int i = 1; i <= n; i++) {
            fast = fast->next;
        }

        // If fast is NULL, we need to remove the head
        if (fast == NULL) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }

        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete;

        return head;
    }
};