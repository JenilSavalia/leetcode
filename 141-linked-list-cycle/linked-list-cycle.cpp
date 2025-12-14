/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

using namespace std;
class Solution {
public:
    bool hasCycle(ListNode* head) {

        if (head == NULL)
            return false;

        if (head->next == NULL)
            return false;

        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) {
                // Optional: find cycle length
                int length = 1;
                ListNode* temp = slow->next;
                while (temp != slow) {
                    length++;
                    temp = temp->next;
                }
                cout << "Length : " << length;

                return true;
            }
        }

        return false;
    }
};