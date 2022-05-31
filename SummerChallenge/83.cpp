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

// 83. Remove Duplicates from Sorted List

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *a) 
    {
        if(!a||!a->next) return a;
        ListNode *b=a;
        
        while(b&&b->next)
        {
            if(b->val==b->next->val)
                b->next=b->next->next;
            else
                b=b->next;
        }
        return a;
    }
};


// Input: head = [1,1,2]
// Output: [1,2]

// Input: head = [1,1,2,3,3]
// Output: [1,2,3]


