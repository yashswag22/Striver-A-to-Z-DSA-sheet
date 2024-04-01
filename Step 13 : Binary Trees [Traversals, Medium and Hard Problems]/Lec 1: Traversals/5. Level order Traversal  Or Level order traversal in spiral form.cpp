/*
102. Binary Tree Level Order Traversal
Solved
Medium
Topics
Companies
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 2000].
-1000 <= Node.val <= 1000

Seen this question in a real interview before?
1/4
Yes
No
Accepted
2.2M
Submissions
3.2M
Acceptance Rate
67.0%
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        if (root == NULL)
            return ans;

        queue<TreeNode*> q;

        q.push(root);

        int siz = q.size();
        while (!q.empty()) {

            vector<int> v;
            for (int i = 0; i < siz; i++) {

                TreeNode* temp = q.front();
                q.pop();
                if (temp != nullptr) {
                    v.push_back(temp->val);

                    if (temp->left != nullptr)
                        q.push(temp->left);
                    if (temp->right != nullptr)
                        q.push(temp->right);
                }
            }
            siz = q.size();
            ans.push_back(v);
        }

        return ans;
    }
};
