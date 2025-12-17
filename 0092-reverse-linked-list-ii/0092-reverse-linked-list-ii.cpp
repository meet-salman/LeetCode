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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (left == right)
            return head;

        ListNode* start, *current = head;
        int position = 1;
        stack<int> st;

        while (current && position <= right) {
            if (position == left)
                start = current;
            if (position >= left && position <= right)
                st.push(current->val);

            position++;
            current = current->next;
        }

        current = start;
        while(!st.empty())
        {
            current->val = st.top();
            st.pop();
            current = current->next;
        } 
        return head;
    }
};