// 95. Unique Binary Search Trees II

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
    
    vector<TreeNode*> fun(int i,int j){
        vector<TreeNode*> vec;
        if(i>j) {
            vec.push_back(NULL);
            return vec;
        }
        for(int k=i;k<=j;k++){
            vector<TreeNode*> lefttree=fun(i,k-1);
            vector<TreeNode*> rightree=fun(k+1,j);
            
            for(int l=0;l<lefttree.size();l++){
                TreeNode* lt=lefttree[l];
                for(int r=0;r<rightree.size();r++){
                    TreeNode* rt=rightree[r];
                    TreeNode* node=new TreeNode(k);
                    node->left=lt;
                    node->right=rt;
                    vec.push_back(node);
                }
            }
        }
        return vec;
        
    }
    
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> ans;
        if(n==0) return ans;
                ans=fun(1,n);
       
        return ans;
    }
};

// Input: n = 3
// Output: [[1,null,2,null,3],[1,null,3,2],[2,1,3],[3,1,null,null,2],[3,2,null,1]]

// Input: n = 1
// Output: [[1]]
