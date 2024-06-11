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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;

        map<int, map<int, vector<int>>> nodes;

        queue<pair<TreeNode*, pair<int, int>>> q;

        q.push({root, {0, 0}});

        while (!q.empty()) {
            pair<TreeNode*, pair<int, int>> temp = q.front();
            q.pop();
            TreeNode* frontNode = temp.first;
            int hd = temp.second.first;   // hd = horizontal distance
            int lvl = temp.second.second; // lvl = level of node

            if (frontNode != NULL) {
                nodes[hd][lvl].push_back(frontNode->val);
            }

            if (frontNode->left != nullptr)
                q.push({frontNode->left, {hd - 1, lvl + 1}});
            if (frontNode->right != nullptr)
                q.push({frontNode->right, {hd + 1, lvl + 1}});
        }

        for (auto i : nodes) {        // i will give map<int,map<>>
            vector<int>temp1;
            for (auto j : i.second) { // j will give map<int, vector<>>
                vector<int> temp = j.second;
                sort(temp.begin(),temp.end());
                for(int i=0;i<temp.size();i++)
                temp1.push_back(temp[i]);
            }
            ans.push_back(temp1);
        }

        return ans;
    }
};
