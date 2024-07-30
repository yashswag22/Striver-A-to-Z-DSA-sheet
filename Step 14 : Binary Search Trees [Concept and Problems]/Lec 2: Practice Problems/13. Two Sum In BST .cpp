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

    stack<TreeNode*>s1;
    stack<TreeNode*>s2;

    void pushleft(TreeNode* root){
        while(root!=NULL){
            s1.push(root);
            root = root->left;
        }
    }

    int next(){
        if(!s1.empty()){
            TreeNode* temp = s1.top();
            s1.pop();
            if(temp->right) pushleft(temp->right);
            return temp->val;
        }
        return INT_MIN;
    }

    void pushright(TreeNode* root){
        while(root!=NULL){
            s2.push(root);
            root = root->right;
        }
    }

    int before(){
        if(!s2.empty()){
            TreeNode* temp = s2.top();
            s2.pop();
            if(temp->left) pushright(temp->left);
            return temp->val;
        }
        return INT_MIN;
    }
    bool findTarget(TreeNode* root, int k) {
        bool ans = false;

        pushleft(root);
        pushright(root);
        int small = next();
        int big = before();

      while (small != INT_MIN && big != INT_MIN && small < big) {
        if (small + big == k) {
            return true;
        }
        if (small + big > k) {
            big = before();
        } else {
            small = next();
        }
      }

        return ans;
    }
};
