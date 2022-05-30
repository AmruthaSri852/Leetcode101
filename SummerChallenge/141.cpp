/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// 141. Linked List Cycle


class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode *p= head, *t = head;
        while (t && t->next) {
            p = p->next;
            t = t->next->next;
            if (p == t) return true;
        }
        return false;
    }
};


// Input: head = [3,2,0,-4], pos = 1
// Output: true
    
// Input: head = [1,2], pos = 0
// Output: true
    
// Input: head = [1], pos = -1
// Output: false
