#include<bits/stdc++.h>
// void printMap(const map<int, vector<pair<int, int>>>& nodes) {
//     for (const auto& lvl_pair : nodes) {
//         int lvl = lvl_pair.first;
//         const vector<pair<int, int>>& vec = lvl_pair.second;
        
//         cout << "{" << lvl;
//         for (const auto& p : vec) {
//             cout << ", {" << p.first << ", " << p.second << "}";
//         }
//         cout << "}" << endl;
//     }
// }

bool isSymmetric(BinaryTreeNode<int>* root)
{
   if(root == NULL) return true;
 
    if(root->left == NULL && root->right == NULL) return true;

      map <int,vector<pair<int,int>>> nodes;
   queue<pair<int,pair<int,BinaryTreeNode<int>*>>> q;
            //y,x
   //q.push({0,{0,root}});

   if(root->left)
   q.push({1,{-1,root->left}});

   if(root->right)
   q.push({1,{1,root->right}});


   while(!q.empty()){
       pair<int,pair<int,BinaryTreeNode<int>*>> temp = q.front();
       q.pop();
       int lvl = temp.first;
       int x = temp.second.first;
       BinaryTreeNode<int>* frontnode = temp.second.second;

        if(frontnode != NULL)
        nodes[lvl].push_back({x,frontnode->data});

        if(frontnode->left)
        q.push({lvl+1,{x-1,frontnode->left}});

        if(frontnode->right)
         q.push({lvl+1,{x+1,frontnode->right}});

   }

    //printMap(nodes);

   for(auto i:nodes){ // give <lvl,vector<pair<int,int>>>
       // vector<pair<int,int>> temp = i.second;
       int siz = i.second.size();
        if(siz%2 != 0) return false;
        for(int j=0;j<siz/2;j++){
            pair<int,int> temp = i.second[j];
            pair<int,int> temp2 = i.second[(siz-1)-j];

            if(temp.first != -1*(temp2.first)) return false;
            else{
                if(temp.second != temp2.second) return false;
            }

            // cout<<temp.first<<" "<<temp.second<<" ";
            // cout<<temp2.first<<" "<<temp2.second;
            
        }
       // cout<<endl;

   }

   return true;
}
