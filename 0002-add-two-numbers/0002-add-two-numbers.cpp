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
    //  Element added at last
    void push_back(ListNode*& l3, ListNode*& newNode, int val) {
        ListNode* n = new ListNode(val);
        if (!l3)
            l3 = newNode = n;
        else {
            newNode->next = n;
            newNode = n;
        }
    }

    // Addition of Nodes
    void nodes_addition(ListNode*& l1, ListNode*& l2, ListNode*& l3) {
        int carry = 0;
        ListNode *current1 = l1, *current2 = l2;
        ListNode* newNode = nullptr;
        while (current1 || current2 || carry) {
            int d1 = current1 ? current1->val : 0;
            int d2 = current2 ? current2->val : 0;
            int sum = d1 + d2 + carry;

            int dig = sum % 10;
            carry = sum / 10;
            push_back(l3, newNode, dig);
            current1 = current1 ? current1->next : nullptr;
            current2 = current2 ? current2->next : nullptr;
        }
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = nullptr;
        nodes_addition(l1, l2, l3);
        
        return l3;
    }
};