// 20 September, 2025
//
// Les play some minecraft today
//

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* slow = dummy;
        ListNode* fast = dummy;

        // create gap of n + 1 steps between slow and fast pointers
        for (int i = 0; i < n + 1; i++) {
            fast = fast->next;
        }

        // now loop while fast does not hit the nullptr / end
        while (fast) {
            fast = fast->next;
            slow = slow->next;
        }

        // slow->next - is the node we have to remove
        slow->next = slow->next->next;

        return dummy->next;
    }
};

