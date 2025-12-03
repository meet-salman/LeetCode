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
        if (!head)
            return head;
        else {
            ListNode* current = head;
            while (current) {
                ListNode* toDlt;
                if (head->val == val) {
                    toDlt = head;
                    head = head->next;
                    current = head;
                    delete toDlt;
                    continue;
                } else if (current->next != nullptr) {
                    if (current->next->val == val) {
                        toDlt = current->next;
                        current->next = current->next->next;
                        delete toDlt;
                        continue;
                    }
                }
                current = current->next;
            }
        }
        return head;
    }
};