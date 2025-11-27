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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int carry = 0;
        int sum = 0;

        ListNode head;
        ListNode* dummy = &head;
        

        while (l1 != NULL || l2 != NULL || carry) {

            sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = sum / 10;

            // .. push too linked list
            dummy->next = new ListNode(sum % 10);
            dummy = dummy->next;

            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }

        return head.next;
    }
};