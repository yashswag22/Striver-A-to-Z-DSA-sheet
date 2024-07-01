class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {

        TreeNode* root = new TreeNode(preorder[0]);

        for(int i =1;i<preorder.size();i++){

            TreeNode* temp = new TreeNode (preorder[i]);
            TreeNode * temproot = root;
            while(temproot){
                if(temp->val < temproot->val && !temproot->left){
                    temproot->left = temp;
                    temproot = nullptr;
                }
                    
                else if(temp->val < temproot->val && temproot->left)
                    temproot = temproot->left;
                else if(temp->val > temproot->val && !temproot->right){
                     temproot->right = temp;
                     temproot = nullptr;
                }
                else if(temp->val > temproot->val && temproot->right)
                    temproot = temproot->right;
            }
        }

        return root;
    }
};
