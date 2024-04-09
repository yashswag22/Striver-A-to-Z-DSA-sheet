int leafNode =0;
int maxsum(TreeNode <int>* root,int& ans){
    if(root == NULL) return 0;
    if(root->right == nullptr && root->left == nullptr){
        leafNode++;
    }

    int lmx = maxsum(root->left, ans);
    int rmx = maxsum(root->right,ans);

    ans = max(ans, (root->val+lmx+rmx));

    return max(lmx,rmx)+root->val;

}
long long int findMaxSumPath(TreeNode<int> *root)
{
      if(root == NULL) return -1;
    else if(root->right == NULL && root->left == NULL) return -1;
    leafNode =0;
   
    int ans =0;
    maxsum(root,ans);
   // cout<<leafNode<<endl;
     if(leafNode == 1) return -1;
    return ans;
}
