 void inorder(TreeNode* root,int &k,int &count,int &ans){
       if(!root) return;
       inorder(root->left,k,count,ans);
       count++;
       if(count == k) {
        ans = root->val;
        return;
       }
       inorder(root->right,k,count,ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        int ans =-1;
        int count = 0;
         inorder(root,k,count,ans);
         return ans;
    }
