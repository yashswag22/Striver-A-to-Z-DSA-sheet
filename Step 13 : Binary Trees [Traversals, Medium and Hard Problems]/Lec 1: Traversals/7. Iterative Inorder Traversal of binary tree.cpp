 vector<int> getInOrderTraversal(TreeNode *root){
     vector<int>ans;
     if(root == NULL) return ans;

    stack<TreeNode*>s;

    while(root!= nullptr || !s.empty())
    {
        if(root == NULL && !s.empty()) {
            ans.push_back(s.top()->data);
            root = s.top()->right;
            s.pop();
        }
        else{
        s.push(root);
        root = root -> left;
        }

    }
    return ans;
 }
