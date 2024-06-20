  int min(TreeNode* root) {
        if (root->left == NULL)
            return root->val;
       return min(root->left);
        
    }

    int max(TreeNode* root) {
        if (!root->right)
            return root->val;
       return max(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if (!root)
            return true;

        if (isValidBST(root->left) && isValidBST(root->right)) {
            if (root->left && root->right) {
                if (root->val > max(root->left) && root->val < min(root->right) )
                    return true;
                else
                    return false;
            } else if (root->left && !root->right) {
                if (root->val > max(root->left))
                    return true;
                else
                    return false;
            } else if (!root->left && root->right) {
                if (root->val < min(root->right) )
                    return true;
                else
                    return false;
            }
            return true;
        } else
            return false;
    }
