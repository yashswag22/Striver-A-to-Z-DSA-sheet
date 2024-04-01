/* Tree Traversals
Easy
0/40
Average time to solve is 15m
Contributed by
136 upvotes
Asked in companies
Problem statement
You have been given a Binary Tree of 'N'

nodes, where the nodes have integer values.



Your task is to return the ln-Order, Pre-Order, and Post-Order traversals of the given binary tree.



For example :
For the given binary tree:

The Inorder traversal will be [5, 3, 2, 1, 7, 4, 6].
The Preorder traversal will be [1, 3, 5, 2, 4, 7, 6].
The Postorder traversal will be [5, 2, 3, 7, 6, 4, 1].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
1 2 3 -1 -1 -1  6 -1 -1
Sample Output 1 :
2 1 3 6 
1 2 3 6 
2 6 3 1
Explanation of Sample Output 1 :
 The given binary tree is shown below:

Inorder traversal of given tree = [2, 1, 3, 6]
Preorder traversal of given tree = [1, 2, 3, 6]
Postorder traversal of given tree = [2, 6, 3, 1]
Sample Input 2 :
1 2 4 5 3 -1 -1 -1 -1 -1 -1
Sample Output 2 :
5 2 3 1 4 
1 2 5 3 4 
5 3 2 4 1
Explanation of Sample Output 2 :
The given binary tree is shown below:

Inorder traversal of given tree = [5, 2, 3, 1, 4]
Preorder traversal of given tree = [1, 2, 5, 3, 4]
Postorder traversal of given tree = [5, 3, 2, 4, 1]
Constraints :
1 <= 'N' <= 10^5
0 <= 'data' <= 10^5     

where 'N' is the number of nodes and 'data' denotes the node value of the binary tree nodes.

Time limit: 1 sec
*/

/*
    Following is Binary Tree Node structure:
    class TreeNodesh
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void preOrder(TreeNode *root,vector<int>&v)
{
   if(root == NULL) return ;
   v.push_back(root->data);
   preOrder(root->left,v);
   preOrder(root->right,v);
}
void inOrder(TreeNode *root, vector<int>&v)
{
    if(root == NULL) return ;
    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right,v);
}
void postOrder(TreeNode *root,vector<int>&v)
{
    if(root == NULL) return;
    postOrder(root->left,v);
    postOrder(root->right,v);
    v.push_back(root->data);   
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<int>pree;
    vector<int>ine;
    vector<int>poste;
    vector<vector<int>>v;
    preOrder(root,pree);
    inOrder(root,ine);
    postOrder(root,poste);
    
    
    v.push_back(ine);
    v.push_back(pree);
    v.push_back(poste);
    return v;
}
