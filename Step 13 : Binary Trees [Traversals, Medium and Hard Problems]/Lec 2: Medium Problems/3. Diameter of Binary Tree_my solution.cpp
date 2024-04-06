int diameter(TreeNode<int>*root,int cur,int& dia)
{
    if(root == NULL) return 0;
    int ld = diameter(root->left,cur+1,dia) - cur;
    if(ld<0) ld =0;
    int rd = diameter(root->right,cur+1,dia)-cur;
    if(rd<0) rd = 0;

    dia = max((ld+rd),dia);
    int temp = max(ld,rd);
    return temp+cur;
}

int diameterOfBinaryTree(TreeNode<int> *root){
	int dia =0;
    diameter(root,0,dia);
    return dia;
}
