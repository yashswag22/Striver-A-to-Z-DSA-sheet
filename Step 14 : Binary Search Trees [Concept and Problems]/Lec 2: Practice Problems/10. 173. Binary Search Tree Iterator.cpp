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
class BSTIterator {
public:

    stack<TreeNode*> s;
    BSTIterator(TreeNode* root) {
        pushall(root);
    }

    void pushall(TreeNode* root){
        while (root!= NULL){
            s.push(root);
            root = root->left;
        }
    }
    
    int next() {
        if(hasNext()){
           TreeNode * temp = s.top();
           s.pop();
           if(temp -> right) pushall(temp->right);
           return temp->val;
        }
        return 0;
    }
    
    bool hasNext() {
        if(s.empty()) return false;
        else return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
