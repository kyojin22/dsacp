// 20 September, 2025
//
// I still have not chose my BIS project
// 
// I wanna play minecraft
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;

            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};

