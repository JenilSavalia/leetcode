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

 #include <stack>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int> s;
        ListNode* temp = head;
        while (temp != NULL) {
            s.push(temp->val);
            temp = temp->next;
        }
        ListNode* temp2 = head;
        while (temp2 != NULL) {
            temp2->val = s.top();
            s.pop();
            temp2 = temp2->next;
        }
        return head;
    }
};