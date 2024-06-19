my GitHub : github.com/yashswag22

int solve (TreeNode<int> *root, int x, int curr_min){
        if(root->val == x) return x;
        
        if(root->val > x){
            
            if(root->left) return solve(root->left,x,curr_min);
            else return curr_min;
            
        }
        
        if(root->val < x){
            if(root->val > curr_min){
                curr_min = root-> val;
                
                if(root->right) return solve(root->right,x,curr_min);
                return curr_min;
            }
        }
        
        if(!root->left && !root->right ) return curr_min;
}

int floorInBST(TreeNode<int> * root, int x)
{
   if(root == NULL) return -1;
    
    return solve(root,x,-1);
}
