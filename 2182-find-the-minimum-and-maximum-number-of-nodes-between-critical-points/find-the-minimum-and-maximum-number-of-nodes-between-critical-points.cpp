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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        ListNode* temp = head;
        ListNode* prev = NULL;
        int firstCriticalPoint = -1;
        int lastCriticalPoint = -1;
        int NodeCount = 0;

        int minDistance = INT_MAX;

        while (temp != NULL) {
            NodeCount++;

            int curr = temp->val;
            // int next = temp->next.val;

            if (prev != NULL && temp->next != NULL &&
                ((curr > prev->val && curr > temp->next->val) ||
                 (curr < prev->val && curr < temp->next->val))) {

                if (firstCriticalPoint == -1) {
                    firstCriticalPoint = NodeCount;
                }

                if (lastCriticalPoint != -1) {
                    minDistance =
                        min(minDistance, NodeCount - lastCriticalPoint);
                }

                lastCriticalPoint = NodeCount;
            }

            prev = temp;
            temp = temp->next;
        }

        if (firstCriticalPoint == -1 ||
            firstCriticalPoint == lastCriticalPoint) {
            return {-1, -1};
        }

        int maxDistance = lastCriticalPoint - firstCriticalPoint;
        return {minDistance, maxDistance};
    }
};