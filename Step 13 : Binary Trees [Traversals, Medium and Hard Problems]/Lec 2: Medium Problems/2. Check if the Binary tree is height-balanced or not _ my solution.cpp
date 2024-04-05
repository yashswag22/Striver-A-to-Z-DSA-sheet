int maxh(TreeNode<int>* root)
{
    if(root == nullptr) return 0;

    int lh = maxh(root->left);
    int rh = maxh(root->right);
    
    return 1+max(lh,rh);

}
bool traversal(TreeNode<int>* root, bool& check)
{
    if(root == nullptr) return true;

      int lh = maxh(root->left);
    int rh = maxh(root->right);

    int diff = abs(lh - rh);
    if (diff > 1) {
        check = false; // Update the check variable if the tree is not balanced
        return false;  // Return false to propagate the unbalanced state
    }
    
    bool left_balanced = traversal(root->left, check);
    bool right_balanced = traversal(root->right, check);

  

    // Return true if both left and right subtrees are balanced
    return left_balanced && right_balanced;
}

    bool isBalancedBT(TreeNode<int>* root){
       bool check =true;
       check = traversal(root,check);
    //    if(check == false) return false
    //    return true;
    return check;
}
