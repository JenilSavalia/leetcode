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

using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // if (list1 == NULL && list2 != NULL) {
        //     return list2;
        // } else if (list1 != NULL && list2 == NULL) {
        //     return list1;
        // }

        // ListNode* temp = NULL;
        // ListNode* tempHead = NULL;

        // while (list1 != NULL && list2 != NULL) {
        //     if (list1->val > list2->val) {
        //         if (temp == NULL) {
        //             temp = list2;
        //             tempHead = temp;
        //             list2 = list2->next; // ADD THIS
        //         } else {
        //             temp->next = list2;
        //             temp = temp->next;
        //             list2 = list2->next;
        //         }
        //     } else if (list1->val < list2->val) {
        //         if (temp == NULL) {
        //             temp = list1;
        //             tempHead = temp;
        //             list1 = list1->next; // ADD THIS

        //         } else {
        //             temp->next = list1;
        //             temp = temp->next;
        //             list1 = list1->next;
        //         }
        //     } else if (list1->val == list2->val) {
        //         if (temp == NULL) {
        //             temp = list1;
        //             tempHead = temp;
        //             list1 = list1->next;

        //             temp->next = list2;
        //             temp = temp->next;
        //             list2 = list2->next;
        //         } else {
        //             temp->next = list1;
        //             temp = temp->next;
        //             list1 = list1->next;

        //             temp->next = list2;
        //             temp = temp->next;
        //             list2 = list2->next;
        //         }
        //     }
        // }

        // if (list1) {
        //     temp->next = list1;
        // }
        // if (list2) {
        //     temp->next = list2;
        // }

        // return tempHead;

        ListNode dummy;
        ListNode* tail = &dummy;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        if (list1 != NULL) {
            tail->next = list1;
        }
        if (list2 != NULL) {
            tail->next = list2;
        }
        return dummy.next;
    }
};