/*104. Maximum Depth of Binary Tree
Solved
Easy
Topics
Companies
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: 3
Example 2:

Input: root = [1,null,2]
Output: 2
 

Constraints:

The number of nodes in the tree is in the range [0, 104].
-100 <= Node.val <= 100
*/

int ans = 0;
void preorder(TreeNode<int>*temp,int cur_max)
{
    ans= max(ans,cur_max);
     if(temp == NULL) return;
     if(temp->left != nullptr)
     preorder(temp->left,cur_max+1);
     else  preorder(temp->left,cur_max);
     if(temp->right != nullptr)
     preorder(temp->right,cur_max+1);
      else  preorder(temp->right,cur_max);

}
int heightOfBinaryTree(TreeNode<int> *root)
{
    if(root == NULL) return 0;
	preorder(root,1);
    return ans;
}
