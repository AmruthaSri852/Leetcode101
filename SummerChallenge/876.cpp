// 876. Middle of the Linked List

class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *p,*pp;
        p=head;
        pp=head;
        while(pp->next!= NULL)
        {
            p=p->next;
            pp=pp->next;
            if(pp->next!=NULL) pp=pp->next;
            else return p;
        }
       return p;
    }
};

// Input: head = [1,2,3,4,5]
// Output: [3,4,5]

// Input: head = [1,2,3,4,5,6]
// Output: [4,5,6]
