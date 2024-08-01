/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    stack<TreeNode*> s;

    void pushleft(TreeNode* root){
        while(root != NULL){
            s.push(root);
            root = root->left;
        }
    }
    TreeNode* next(){
        if(!s.empty()){
            TreeNode* temp = s.top();
            s.pop();
            if(temp->right) pushleft(temp->right);
            return temp;
        }

        return NULL;
    }
    void recoverTree(TreeNode* root) {

        TreeNode * first  = NULL;
        TreeNode * second = NULL;

         TreeNode * prev = NULL;
         TreeNode * curr = NULL;

        int irregpair = 0;

        pushleft(root);

        prev = next();
         curr = next();

        while(curr!=NULL && irregpair <2){
            // curr = next();

            if(curr -> val < prev -> val ){
                if(irregpair == 0){
                    first = prev;
                    second = curr;
                    irregpair++;
                }
                else if(irregpair == 1){
                    second = curr;
                    irregpair++;
                }
            }

            prev = curr;
             curr = next();
        }
        if(first && second)
            swap(first->val,second->val);
        
    }
};
