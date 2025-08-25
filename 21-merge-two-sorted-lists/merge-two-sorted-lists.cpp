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
bool comp(ListNode* a, ListNode* b) { return a->val < b->val; }

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<ListNode*> v;

        ListNode* temp1 = list1;
        while (temp1 != NULL) {
            v.push_back(temp1);
            temp1 = temp1->next;
        }

        ListNode* temp2 = list2;
        while (temp2 != NULL) {
            v.push_back(temp2);
            temp2 = temp2->next;
        }

        sort(v.begin(), v.end(), comp);
        // list<int> sortedLL = {v[0]};

        for (int i = 0; i < v.size(); i++) {
            if (i + 1 < v.size()) {
                v[i]->next = v[i + 1];
            } else {
                v[i]->next = NULL;
            }
        }

        return v.empty() ? NULL : v[0];
    }
};