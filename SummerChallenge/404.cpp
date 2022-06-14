// 404. Sum of Left Leaves

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
    
    int sumOfLeftLeaves(TreeNode* root) 
    {
            dfs(root);
        return ans;
    }
    
    int ans=0;
    void dfs(TreeNode* root)
        
    {
        if(!root)return;
        if(root->left !=NULL && root->left->left==NULL && root->left->right==NULL)
            ans += root->left->val;
        
        dfs(root->left);
        dfs(root->right);
    }
};

// Input: root = [3,9,20,null,null,15,7]
// Output: 24

// Input: root = [1]
// Output: 0
