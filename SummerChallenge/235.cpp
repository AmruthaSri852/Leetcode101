// 235. Lowest Common Ancestor of a Binary Search Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        
        if(p->val < root->val && q->val < root->val) return lowestCommonAncestor(root->left , p, q);
        if(p->val > root->val && q->val > root->val) return lowestCommonAncestor(root->right, p, q);
        
        return root;
        
    }
};

// Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
// Output: 6

// Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4
// Output: 2

// Input: root = [2,1], p = 2, q = 1
// Output: 2
