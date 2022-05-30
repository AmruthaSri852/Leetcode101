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


// 1290. Convert Binary Number in a Linked List to Integer


class Solution {
public:
    int getDecimalValue(ListNode* t) {
        int ans = 0;
        while (t) {
            ans = ans * 2 + t->val;
            t = t->next;
        }
        return ans;
    }
};


// Input: head = [1,0,1]
// Output: 5

// Input: head = [0]
// Output: 0
