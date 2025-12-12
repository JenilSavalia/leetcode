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
    ListNode* removeElements(ListNode* head, int val) {

        if(head == NULL) return NULL;

        // ListNode* temp = head;
        // while(temp->next != NULL){
        //     if(temp->next->val == val){
        //         ListNode* temp2 = temp->next;
        //         temp->next = temp->next->next;

        //         temp2->next = NULL;
        //         delete temp2;
        //     }
        //     temp = temp->next;
        // }

        // return head;


        ListNode* returnNode = new ListNode();
        ListNode* temp = returnNode;
        while(head != NULL){
            if(head->val != val){
                temp->next = head;
                temp = temp->next;
            }
            head = head->next;
        }

        temp->next = NULL;
        return returnNode->next;

    }
};