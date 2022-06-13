// 112. Path Sum

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
        bool hasPathSum(TreeNode* root, int targetSum) 
 {
            if(root==NULL) {return false;}
            int sum=targetSum-(root->val);
            
            if(hasPathSum(root->left, sum) || hasPathSum(root->right, sum)) {return true;}
            if(root->left==NULL && root->right==NULL && sum==0) {return true;}
    return false;
  }
};


// Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
// Output: true

// Input: root = [1,2,3], targetSum = 5
// Output: false

// Input: root = [], targetSum = 0
// Output: false
    
