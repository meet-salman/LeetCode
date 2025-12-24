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
    void reverse_LL(ListNode*& current, int group) {
        stack<int> st;
        ListNode* temp = current;

        while (temp && group--) {
            st.push(temp->val);
            temp = temp->next;
        }

        temp = current;
        while (!st.empty()) {
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }
    }

public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        int group = 1;
        ListNode* current = head;

        while (current) {
            bool isR = false;

            int j = 0;
            int i = group;
            ListNode* temp = current;
            while (current && i--) {
                current = current->next;
                j++;
            }

            if (j % 2 == 0)
                reverse_LL(temp, j);

            group++;
        }
        return head;
    }
};