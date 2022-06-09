// 572. Subtree of Another Tree

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
   bool isIdentical(TreeNode* root, TreeNode* subRoot)
    {

        if( ! root || !subRoot )
            return root==subRoot;
      
        if( root->val != subRoot->val )
            return false;

        return isIdentical(root->left,subRoot->left) && isIdentical(root->right,subRoot->right);
      
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot)
    {
        if( ! root)
            return false;
        
        if( isIdentical(root,subRoot) )
            return true;

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};

// Input: root = [3,4,5,1,2], subRoot = [4,1,2]
// Output: true

// Input: root = [3,4,5,1,2,null,null,null,null,0], subRoot = [4,1,2]
// Output: false
