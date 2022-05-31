// 143. Reorder List

class Solution {
public:
    
    void reorderList(ListNode* head) {
        if (!head) return;
        
        ListNode *t = head, *mid = head, *prev = NULL;
        while (t->next && t->next->next) {
            t = t->next->next;
            mid = mid->next;
        }
        if (t->next) mid = mid->next;
        while (mid) {
            t = mid->next;
            mid->next = prev;
            prev = mid;
            mid = t;
        }
        mid = prev;
        while (head && mid) {
            t = head->next;
            prev = mid->next;
            head->next = mid;
            mid->next = t;
            head = t;
            mid = prev;
        }
        if (head && head->next) head->next->next = NULL;
    }
};


// Input: head = [1,2,3,4]
// Output: [1,4,2,3]

// Input: head = [1,2,3,4,5]
// Output: [1,5,2,4,3]
