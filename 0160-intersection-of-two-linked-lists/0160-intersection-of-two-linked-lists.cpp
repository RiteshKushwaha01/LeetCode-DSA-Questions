/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    ListNode* collisionPoint(ListNode* h1, ListNode* h2, int d) {
        while (d) {
            d--;
            h2 = h2->next;
        }
        while (h1 != h2) {
            h1 = h1->next;
            h2 = h2->next;
        }
        return h1;
    }

public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        int n1 = 0;
        int n2 = 0;

        while (temp1 != nullptr) {
            n1++;
            temp1 = temp1->next;
        }
        while (temp2 != nullptr) {
            n2++;
            temp2 = temp2->next;
        }
        if (n1 < n2)
            return collisionPoint(headA, headB, n2 - n1);
        else
            return collisionPoint(headB, headA, n1 - n2);
    }
};