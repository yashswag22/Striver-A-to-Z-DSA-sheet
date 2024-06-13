vector<int> printLeftView(BinaryTreeNode<int>* root) {
   vector<int>ans;
   if(root == NULL) return ans;
   
    map<int,vector<int>>nodes;
    queue<pair<int,BinaryTreeNode<int>*>> q;
    q.push({0,root});

   while(!q.empty()){
       pair<int,BinaryTreeNode<int>*> frontpair = q.front();
       q.pop();

       int lvl = frontpair.first;
       BinaryTreeNode<int>* frontNode = frontpair.second;

       if(frontNode != NULL) nodes[lvl].push_back(frontNode->data);

       if(frontNode->left)
       q.push({lvl+1,frontNode->left});
       if(frontNode->right)
       q.push({lvl+1,frontNode->right});

   }

   for(auto i : nodes){ // give <int, vector<>>
     
      for(auto j : i.second){ // it will iterate the vector
        ans.push_back(j);
        break;
      }
        
   }
   return ans;
}
