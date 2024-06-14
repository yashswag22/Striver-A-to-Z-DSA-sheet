bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(root == NULL) return false;

    if(root->data == x) return true;

    if(root->data > x)
    searchInBST(root->left,x);
    else
    searchInBST(root->right,x);
}
