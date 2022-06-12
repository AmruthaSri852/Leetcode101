// 257. Binary Tree Paths

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
    
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root,"");
        return res;
    }
    
    vector<string> res;
    
    void dfs(TreeNode* root, string path){
        
        if(!root)return;
        
        path += to_string(root->val);
        
        if(!root->left && !root->right){
            res.push_back(path);
        }
        
        dfs(root->left, path + "->");
        dfs(root->right,path + "->");
        
    }
};

// Input: root = [1,2,3,null,5]
// Output: ["1->2->5","1->3"]

// Input: root = [1]
// Output: ["1"]
