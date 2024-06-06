/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode<int>
    {
    public:
        T data;
        TreeNode<int><T> *left;
        TreeNode<int><T> *right;

        TreeNode<int>(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode<int>()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

bool isLeaf(TreeNode<int> * root){
    if(root == NULL) return true;
    
    if(root->left == NULL && root->right == NULL) return true;
    else
    return false;
}

void addLeftBoundary(TreeNode<int> * root, vector<int> &vec)
{
    TreeNode<int> * cur = root;
    while(cur){
        if(!isLeaf(cur)) vec.push_back(cur->data);
        if(cur->left!= NULL) cur = cur->left;
        else cur = cur->right;
    }
}

void addRightBoundary(TreeNode<int> * root, vector<int>&vec){
    vector<int>temp;
    TreeNode<int> * cur = root;
    while(cur){
        if(!isLeaf(cur)) temp.push_back(cur->data);
        if(cur->right != NULL) cur = cur->right;
        else cur = cur->left;
    }

    for(int i= temp.size()-1;i>=0;i--){
        vec.push_back(temp[i]);
    }
}

void addLeaves(TreeNode<int> * root, vector<int>&vec)
{
  TreeNode<int> * cur = root;
  if(isLeaf(cur)){
      vec.push_back(cur->data);
      return;
  } 

  if(root->left)  addLeaves(root->left,vec);
   if(root->right) addLeaves(root->right,vec);
    
}
vector<int> traverseBoundary(TreeNode<int> *root)
{
	vector<int>ans;
    if(root== NULL) return ans;
    if(isLeaf(root)) ans.push_back(root->data);
    if(!isLeaf(root)){
    ans.push_back(root->data);
    addLeftBoundary(root->left, ans);
    addLeaves(root, ans);
    addRightBoundary(root->right,ans);
    }
   
    return ans;
}
