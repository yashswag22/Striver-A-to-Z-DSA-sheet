bool isidentical(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2){
    if(root1 == nullptr && root2== nullptr) return true;
    if(root1 == nullptr && root2 != nullptr) return false;
    else  if(root2 == nullptr && root1 != nullptr) return false;
    
    if(root1->data != root2->data) return false;
   
    
   return isidentical(root1->left,root2->left) && isidentical(root1->right,root2->right);
   
    

}

bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    bool checkr = true;
    checkr= isidentical(root1, root2);
    return checkr;	 
}
