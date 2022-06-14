// 530. Minimum Absolute Difference in BST

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
    int minDiff = 1e9, prev = -1;
    void dfs(TreeNode* root) {
        if(!root) return;
        dfs(root->left);
        if(prev != -1) minDiff = min(minDiff, root->val - prev);
        prev = root->val;
        dfs(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        return minDiff;
    }
};

// Input: root = [4,2,6,1,3]
// Output: 1

// Input: root = [1,0,48,null,null,12,49]
// Output: 1
