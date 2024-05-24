/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
   vector< vector<int>> solution(TreeNode* root) {
       vector< vector<int>> ans;
        bool LtoR = false;
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;

        // s2.push(root);
        vector<int> temp;
        temp.push_back(root->val);
        ans.push_back(temp);
         vector<int>temp11;
        if (root->right != NULL) {
            s1.push(root->right);
           
            temp11.push_back(root->right->val);
           // ans.push_back(temp11);
        }
        if (root->left != NULL) {
            s1.push(root->left);
           // vector<int>temp2;
            temp11.push_back(root->left->val);
            //ans.push_back(temp11);
        }
        ans.push_back(temp11);

        while (!s1.empty() || !s2.empty()) {
            if (LtoR == false) {
                 vector<int>temp1;
                while (!s2.empty()) {
                    TreeNode* temp = s2.top();
                    s2.pop();
                    if (temp != NULL) {
                        // ans.push_back(temp->val);
                        if (temp->right != nullptr) {
                           
                            temp1.push_back(temp->right->val);
                           // ans.push_back(temp1);
                            s1.push(temp->right);
                        }
                        if (temp->left != nullptr) {
                             //vector<int>temp1;
                            temp1.push_back(temp->left->val);
                           // ans.push_back(temp1);
                            s1.push(temp->left);
                        }
                        
                    }
                }
                if(!temp1.empty())
                ans.push_back(temp1);
                LtoR = true;
            } else {
                vector<int>temp1;
                while (!s1.empty()) {
                    
                    TreeNode* temp = s1.top();
                    s1.pop();
                    if (temp != NULL) {
                        // ans.push_back(temp->val);
                        if (temp->left != nullptr) {
                            
                            temp1.push_back(temp->left->val);
                            //ans.push_back(temp1);
                            s2.push(temp->left);
                        }
                        if (temp->right != nullptr) {
                           // vector<int>temp1;
                            temp1.push_back(temp->right->val);
                           // ans.push_back(temp1);
                            s2.push(temp->right);
                        }
                    }
                }
                if(!temp1.empty())
                ans.push_back(temp1);
                LtoR = false;
            }
        }

        return ans;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector< vector<int> >ans;
        if (root == NULL)
            return ans;
        if (root->left == nullptr && root->right == nullptr) {
            vector<int> temp;
            temp.push_back(root->val);
            ans.push_back(temp);
            return ans;
        }

        ans = solution(root);

        return ans;
    }
};
