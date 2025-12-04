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
    ListNode* middleNode(ListNode* head) {
        bool isEven = false;
        if (!head || head->next == nullptr)
            return head;
        else if (head->next->next == nullptr) {
            return head->next;
        } else {
            ListNode* slow = head;
            ListNode* fast = head->next;

            do {
                if (fast->next == nullptr) {

                    return (isEven ? slow : slow->next);
                } else {
                    slow = slow->next;
                    if (fast->next->next == nullptr) {
                        fast = fast->next;
                        isEven = true;
                    } else
                        fast = fast->next->next;
                }
            } while (fast);
        }
        return head;
    }
};