int maxh(TreeNode<int>* root)
{
    if(root == nullptr) return 0;

    int lh = maxh(root->left);
    int rh = maxh(root->right);

    if(lh == -1 || rh == -1) return -1;
    if(abs(lh-rh)>1) return -1;
    
    return 1+max(lh,rh);

}
 bool isBalancedBT(TreeNode<int>* root){
     int check = maxh(root);
     if(check == -1) return false;
     else return true;
 }
