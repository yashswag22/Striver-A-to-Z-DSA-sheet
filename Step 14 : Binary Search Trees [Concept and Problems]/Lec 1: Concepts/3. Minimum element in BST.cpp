
class Solution {
  public:
    int minValue(Node* root) {
         if(root->left==NULL)return root->data;
        minValue(root->left);
    }
};
