  if (root == NULL) {
            TreeNode* temp = new TreeNode(val, NULL, NULL);
            return temp;
        }
        if (!root->right && !root->left || (root->val > val && !root->left) ||
            (root->val < val && !root->right)) {
            TreeNode* temp = new TreeNode(val, NULL, NULL);

            if (root->val > val)
                root->left = temp;
            else
                root->right = temp;

            return root;
        } else {
            if (root->val > val)
                insertIntoBST(root->left, val);
            else
                insertIntoBST(root->right, val);
        }

        return root;
