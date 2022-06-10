// 108. Convert Sorted Array to Binary Search Tree

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
private:
    TreeNode* constructBST(vector<int> &nums, int L, int R) {
        if(L > R) {
            return NULL;
        }
        int n = L + (R-L)/2;
        TreeNode *root = new TreeNode(nums[n]);
        root->left = constructBST(nums, L, n-1);
        root->right = constructBST(nums, n+1, R);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return constructBST(nums, 0, nums.size() -1);
    }
};


// Input: nums = [-10,-3,0,5,9]
// Output: [0,-3,9,-10,null,5]

// Input: nums = [1,3]
// Output: [3,1]
