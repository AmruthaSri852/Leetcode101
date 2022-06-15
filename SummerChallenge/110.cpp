// 110. Balanced Binary Tree

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
    bool ans=true;
    bool isBalanced(TreeNode* root) 
    {
        check(root);
        return ans;
    }
    
    int check(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int l=1+check(root->left);
        int r=1+check(root->right);
        
        if(abs(l-r)>1)
            ans=false;
        return max(l,r);
    }
};

// Input: root = [3,9,20,null,null,15,7]
// Output: true

// Input: root = [1,2,2,3,3,null,null,4,4]
// Output: false

// Input: root = []
// Output: true
