#include<bits/stdc++.h>
vector<int> preOrder(TreeNode<int> * root){
    stack<TreeNode<int>*>s;
    vector<int>ans;
    //s.push(root);
    while(!s.empty() || root != NULL)
    {
        if(root == NULL) {
            root = s.top()->right;
            s.pop();
        }
        else{
            ans.push_back(root->data);
            s.push(root);
            root = root->left;

        }
    }
    return ans;
}
