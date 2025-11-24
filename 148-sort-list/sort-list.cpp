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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> s;

        while (temp != NULL) {
            s.push_back(temp->val);
            temp = temp->next;
        }

        sort(s.begin(), s.end());



        temp = head;
        int i = 0;
        while (temp != NULL) {
            temp->val = s[i];
            i++;
            temp = temp->next;
        }

        return head;
    }
};