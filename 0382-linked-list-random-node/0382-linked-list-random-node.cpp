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
    ListNode* head;

public:
    Solution(ListNode* head) { this->head = head; }

    int getRandom() {

        ListNode* curr = head;
        int result;
        int cnt = 1;

        while (curr != NULL) {
            int randomNum = rand() % cnt + 1;

            if (randomNum == 1) {
                result = curr->val;
            }

            cnt++;
            curr = curr->next;
        }
        return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */