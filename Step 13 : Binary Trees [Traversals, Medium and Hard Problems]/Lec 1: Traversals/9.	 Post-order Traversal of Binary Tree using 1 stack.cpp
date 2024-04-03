// ------------------ postOrder using 1 stack -------------------------
 vector<int> postorderTraversal(TreeNode *root){
     vector<int>ans;
     if(root == nullptr) return ans;
    stack<TreeNode*>s;

     while(root!=nullptr || !s.empty() )
     {
         if(root!= nullptr)
         {
             s.push(root);
             root = root->left;
         }
         else{
         TreeNode* temp = s.top()->right;

         if(temp == nullptr){
             //TreeNode* temp = s.top();
             temp = s.top();
             s.pop();
             ans.push_back(temp->data);
             while(!s.empty() && s.top()->right == temp){
                 temp = s.top();
                 s.pop();
                 ans.push_back(temp->data);

             }
         }
         else
         root = temp;
         }
     }
     return ans;
 }

