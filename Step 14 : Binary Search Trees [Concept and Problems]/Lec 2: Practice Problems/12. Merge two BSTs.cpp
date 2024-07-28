stack<TreeNode *>s1;
stack<TreeNode *>s2;

void pushleft(TreeNode* root, stack<TreeNode*> &s){
    while(root != NULL){
        s.push(root);
        root = root->left;
    }
}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    pushleft(root1, s1);
    pushleft(root2, s2);

    vector<int>ans;

    while(!s1.empty() || !s2.empty() ){
        if(s1.empty()){
            TreeNode * temp = s2.top();
            s2.pop();
            ans.push_back(temp->data);
            pushleft(temp->right,s2);
        }
        else if(s2.empty()){
            TreeNode * temp = s1.top();
            s1.pop();
            ans.push_back(temp->data);
            pushleft(temp->right,s1);
        }
        else{
            TreeNode* temp1 = s1.top();
            TreeNode * temp2 = s2.top();

            if(temp1->data <= temp2->data){
            TreeNode * temp = s1.top();
            s1.pop();
            ans.push_back(temp->data);
            pushleft(temp->right,s1);
            }
            else{
            TreeNode * temp = s2.top();
            s2.pop();
            ans.push_back(temp->data);
            pushleft(temp->right,s2);
            }
        }
    }

    return ans;
}
