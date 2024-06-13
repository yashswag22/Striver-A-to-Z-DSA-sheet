class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (root == NULL)
            return ans;

        map<int, vector<int>> nodes;
        queue<pair<int, TreeNode*>> q;
        q.push({0, root});

        while (!q.empty()) {
            pair<int, TreeNode*> frontpair = q.front();
            q.pop();

            int lvl = frontpair.first;
            TreeNode* frontNode = frontpair.second;

            if (frontNode != NULL)
                nodes[lvl].push_back(frontNode->val);

            if (frontNode->left)
                q.push({lvl + 1, frontNode->left});
            if (frontNode->right)
                q.push({lvl + 1, frontNode->right});
        }

        for (auto i : nodes) { // give <int, vector<>>
            int temp;
            for (auto j : i.second) { // it will iterate the vector
                temp = j;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
