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
    ListNode* oddEvenList(ListNode* head) {

        ListNode* temp = head;

        ListNode* rsltHead = new ListNode();
        ListNode* rtrn = rsltHead;
        int count = 1;

        while (temp != NULL) {

            if (count % 2 != 0) {
                rtrn->next = new ListNode(temp->val);
                rtrn = rtrn->next;
            }
            temp = temp->next;
            count++;
        }

        temp = head;
        count = 1;

        while (temp != NULL) {

            if (count % 2 == 0) {
                rtrn->next = new ListNode(temp->val);
                rtrn = rtrn->next;
            }
            temp = temp->next;
            count++;
        }

        return rsltHead->next;
    }
};