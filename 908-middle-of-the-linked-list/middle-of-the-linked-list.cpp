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
    ListNode* middleNode(ListNode* head) {
        // ListNode* temp = head;
        // int len = 0;
        // while (temp != NULL) {
        //     len++;
        //     temp = temp->next;
        // }
        // temp = head;
        // len = len / 2 + 1;
        // int i = 1;
        // while(i!=len){
        //     temp = temp->next;
        //     i++;
        // }
        // return temp;

        // using slow-fast pointer method

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};
