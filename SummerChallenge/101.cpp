// 101. Symmetric Tree

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
    
    void inorder(TreeNode* root, bool &t,TreeNode* left,TreeNode* right)
    {
        if((left==NULL) && (right==NULL)){return;}
        if(left==NULL && (right!=NULL))
            {
                t= false;
                return;
            }
        
        if(right==NULL && (left!=NULL))
            {
                t= false;
                return;
            }
        
        if(left->val!=right->val)
            {
                t= false;
                return;
            }
        inorder(root,t,left->left,right->right);
        inorder(root,t,left->right,right->left);
        return;  
    }
    
    bool isSymmetric(TreeNode* root) 
        {
            bool t= true;
            inorder(root,t,root->left,root->right);
            return t;
        }
};


// Input: root = [1,2,2,3,4,4,3]
// Output: true

// Input: root = [1,2,2,null,3,null,3]
// Output: false
