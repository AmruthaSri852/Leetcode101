// 234. Palindrome Linked List

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
    bool isPalindrome(ListNode* head) 
{
    vector<int> p;
    ListNode* temp=head;
    
    while(temp)
        {
            p.push_back(temp->val);
            temp = temp->next;
        }
    
    int i=0, j=p.size()-1;
    
    while(i<=j)
        {
            if(p[i]!=p[j])
                return false;
                i++;j--;
        }
    return true;
}

// Input: head = [1,2,2,1]
// Output: true
    
// Input: head = [1,2]
// Output: false
};
