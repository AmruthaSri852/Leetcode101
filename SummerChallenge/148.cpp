// 148. Sort List

class Solution {
public:
    
    ListNode* sortList(ListNode* head) 
    {
        vector<int> v;
        ListNode *p=head;
        while(p)
            {
                v.push_back(p->val);
                p=p->next;
            }
        sort(v.begin(),v.end());
        p=head;
        for(int i=0; i<v.size(); i++)
            {
                p->val=v[i];
                p=p->next;
            }
        return head;
    }
};

// Input: head = [4,2,1,3]
// Output: [1,2,3,4]

// Input: head = [-1,5,3,4,0]
// Output: [-1,0,3,4,5]

// Input: head = []
// Output: []
