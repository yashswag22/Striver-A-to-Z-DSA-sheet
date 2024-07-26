#include <bits/stdc++.h> 
/***********************************************************

	Following is the Binary Tree node structure:

	class binaryTreeNode{

	public :
		int data ;
		binaryTreeNode* left ;
		binaryTreeNode* right;

		binaryTreeNode(int data)
		{
			this -> data = data;
			this -> left = NULL;
			this -> right = NULL;
		}
	};

*********************************************************/
int succ(binaryTreeNode *root, int key){
		int ans =-1;

		while(root != NULL){
			if(root->data > key){
				ans = root->data;
				root = root->left;
			}
			else{
				root = root->right;
			}
		}

		return ans;
}

int predecessor(binaryTreeNode *root, int key){
		int ans =-1;

		while(root != NULL){
			if(root->data >= key)
			root = root->left;
			else{
				ans = root->data;
				root = root->right;
			}
		}

		return ans;
}
vector<int> findPreSuc(binaryTreeNode *root, int key)
{
	vector<int>ans;

	ans.push_back(predecessor(root,key));
	ans.push_back(succ(root,key));

	return ans;
}
