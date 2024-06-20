TreeNode* smllest(TreeNode* root) {
        if (!root->left)
            return root;
        return smllest(root->left);
    }

    TreeNode* dlt(TreeNode* root) {
       // TreeNode* temp = root;

        if(!root->left && root->right){
            root = root->right;
            return root;
        }

        if (!root->left && !root->right)
            return nullptr;

        root->left = dlt(root->left);
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return root;
        if (key == root->val) {
            if (root->right) {
                TreeNode* temp = smllest(root->right); // find the smallest on right
                // delete the smallest of right and update root's right
                root->right = dlt(root->right);
                // update the value of root to smallest
                root->val = temp->val;

                return root;
            } 
            else if (root->left) {
                // take the value from left child and give it to parent node and
                root = root->left;
                return root;
            } else {
                return nullptr;
            }
        }

        if (root->val > key)
            root->left = deleteNode(root->left, key);
        else if (root->val < key)
            root->right = deleteNode(root->right, key);

        return root;
    }
