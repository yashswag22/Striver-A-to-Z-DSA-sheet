 vector<int> postorderTraversal(TreeNode *root){
     stack<TreeNode*>s;
     stack<bool>checki;
    vector<int>ans;
    if(root == nullptr)  return ans;

    while(root!=nullptr || !s.empty()){
         if(!checki.empty() && root == NULL && checki.top() == false){
             if(!s.empty())
             root = s.top()->right;
             checki.pop();
             checki.push(true) ;
         }
         else if(!checki.empty() && root == nullptr && checki.top()== true){
            checki.pop();
              if(!s.empty()){
             ans.push_back(s.top()->data);
             s.pop();
            }
             if(!s.empty() && !checki.empty() && checki.top()== false){
             root = s.top()->right;
             
               if(!checki.empty()){
                   checki.pop();
               checki.push(true) ;
               }
            }
            //  else if(!s.empty() && !checki.empty() && checki.top()== true){
            //      ans.push_back(root->data);
            //      s.pop();
            //      checki.pop();
            //      if(!s.empty())
            //  }
           
         }
        else{
            s.push(root);
            checki.push(false);
            root= root->left;
        }
    }
    return ans;
     
 }
