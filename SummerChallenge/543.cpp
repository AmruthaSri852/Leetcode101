// 543. Diameter of Binary Tree

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
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int>ans = helper(root);
        return ans.second;
    }
    pair<int,int> helper(TreeNode* root){
        if(!root)return {0,0};
        pair<int,int>l = helper(root->left);
        pair<int,int> r = helper(root->right);
        
        int maxLen = 1+max(l.first,r.first);
        
        int dia = max(l.first+r.first, max(l.second, r.second));
        return {maxLen, dia};
    }
};

// Input: root = [1,2,3,4,5]
// Output: 3

// Input: root = [1,2]
// Output: 1
