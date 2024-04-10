class Solution {
public:
    int maxsum(TreeNode* root, int& ans) {
        if (root == nullptr) return 0;

        ans = max(ans,root->val);
        int lmx = maxsum(root->left, ans);
        int rmx = maxsum(root->right, ans);
    // if(ans >=0){
        if(lmx >=0 && rmx >=0)
        ans = max(ans, (root->val + lmx + rmx));
        else if(rmx>=0)
        ans = max(ans, (root->val +rmx));
        else if(lmx >=0) ans = max(ans,(root->val + lmx));
        //else if(lmx<0 && rmx<0 && ans < 0)
    // }
    //  else{
    //      if(lmx >=0 && rmx >=0)
    //     ans = max(ans, (root->val + lmx + rmx));
    //     else if(rmx>=0) ans = rmx;
    //     else if(lmx>=0) ans = lmx;
        
    //  }
        if(lmx >=0 || rmx >=0)
        return max(lmx,rmx) + root->val;
        
        return root->val;
    }
    

    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        ans = max(ans, root->val);
        maxsum(root, ans);
        return ans; 
    }
};
