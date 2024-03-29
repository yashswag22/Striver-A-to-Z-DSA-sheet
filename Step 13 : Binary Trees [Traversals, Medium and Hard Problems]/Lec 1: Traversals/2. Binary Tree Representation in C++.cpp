/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/
/* ----------------------- someone else's solution , but small. ---------------------------
Node* createtree(vector<int>& arr, int index) {

    // Base case: If index is out of range, or if the element is -1 (indicating a null node)

    if (index >= arr.size() || arr[index] == -1)

        return nullptr;

 

    // Create a new node with the value at the current index

    Node* root = new Node(arr[index]);

 

    // Recursively create left and right subtrees

    root->left = createtree(arr, 2 * index + 1);

    root->right = createtree(arr, 2 * index + 2);

 

    return root;

}

 

Node* createTree(vector<int>&arr){

    // Write your code here.

    return createtree(arr,0);
}
*/ // ----------------------------------------------------------------------
Node * Binary(int i,int l, int r, vector<int>&v)
{
    if(i == -1) return NULL;
    Node *temp = new Node(v[i]);

    int tempL, tempR;
    if(l*2+1 <v.size()) tempL = l*2+1;
    else tempL = -1;

     if(l*2+2 <v.size()) tempR = l*2+2;
    else tempR = -1;

    temp->left = Binary(l,tempL,tempR,v);

    if(r*2+1 <v.size()) tempL = r*2+1;
    else tempL = -1;

     if(r*2+2 <v.size()) tempR = r*2+2;
    else tempR = -1;

    temp->right = Binary(r,tempL,tempR,v);

    return temp;

}

Node* createTree(vector<int>&arr){
   Node * root;
   root = Binary(0,1,2,arr);
   return root;
}
