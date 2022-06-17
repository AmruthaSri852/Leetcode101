// 987. Vertical Order Traversal of a Binary Tree

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
	vector<vector<int>> verticalTraversal(TreeNode* root) {
		map<int,map<int,multiset<int>>>m;
		queue<pair<TreeNode*,pair<int,int>>>q;
		q.push({root,{0,0}});
		while(!q.empty())
		{
			auto curr=q.front();
			q.pop();
			TreeNode*node=curr.first;
			int x=curr.second.first;
			int y=curr.second.second;
			m[x][y].insert(node->val);
			if(node->left){
				q.push({node->left,{x-1,y+1}});
			}
			if(node->right){
				q.push({node->right,{x+1,y+1}});
			}
		}
		vector<vector<int>>ans;
		for(auto &i:m)
		{
			vector<int>col;
			for(auto &j:i.second)
			{
				col.insert(col.end(),j.second.begin(),j.second.end());
			}
			ans.push_back(col);
		}
		return ans;
	}
};


// Input: root = [3,9,20,null,null,15,7]
// Output: [[9],[3,15],[20],[7]]

// Input: root = [1,2,3,4,5,6,7]
// Output: [[4],[2],[1,5,6],[3],[7]]

// Input: root = [1,2,3,4,6,5,7]
// Output: [[4],[2],[1,5,6],[3],[7]]
