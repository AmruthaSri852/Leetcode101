// 100. Same Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution {
public:
    
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(!p)return q==NULL;
        if(!q)return p==NULL;
        
        if(p->val != q->val)return 0;      
        
        return isSameTree(p->left, q->left) && isSameTree ( p->right, q->right);         
        
        
    }
};


// Input: p = [1,2,3], q = [1,2,3]
// Output: true

    
// Input: p = [1,2], q = [1,null,2]
// Output: false


// Input: p = [1,2,1], q = [1,1,2]
// Output: false
