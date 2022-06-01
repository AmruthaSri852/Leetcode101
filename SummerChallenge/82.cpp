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

// 82. Remove Duplicates from Sorted List II

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head||!head->next) 
            return head;
        if (head->next->val != head->val) 
        {
            head->next = deleteDuplicates(head->next);
        }
         
        else {
            while (head->next && head->next->val == head->val)
                head = head->next;
            return deleteDuplicates(head->next);
        }
        
        return head;
    }
};

// Input: head = [1,2,3,3,4,4,5]
// Output: [1,2,5]]

// Input: head = [1,1,1,2,3]
// Output: [2,3]
