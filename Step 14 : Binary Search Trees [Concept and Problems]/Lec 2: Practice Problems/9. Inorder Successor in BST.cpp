//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

Node* search(Node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->data == key)
       return root;
    
    // Key is greater than root's key
    if (root->data < key)
       return search(root->right, key);
 
    // Key is smaller than root's key
    return search(root->left, key);
}


// } Driver Code Ends
/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    
   // -----------  brut force approach ------------- 
    
    // void inorder(Node* temp, vector<int>&v)
    // {
    //     if(temp == NULL) return;
    //     inorder(temp->left,v);
    //     v.push_back(temp->data);
    //     inorder(temp->right,v);
    // }
    
    // Node * inOrderSuccessor(Node *root, Node *x)
    // {
    //     vector<int>ans;
    //     Node * realans = new Node(0);
        
    //   inorder(root,ans);
       
    //   int temp = x->data;
       
    //   for(int i=0;i<ans.size();i++){
    //       if(ans[i] == temp){               
    //           if(i+1 <ans.size()){
    //               realans->data = ans[i+1];
    //               return realans;
    //           }
               
    //           else return (realans = nullptr);
    //       }
    //   }
    // }
    
    // --------- optimazation ---------------
    
    
   // Function to find the smallest node in a subtree
Node* sml(Node* temp) {
    while (temp && temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

// Function to find the inorder successor
Node* solve(Node* root, Node* x, Node*& maxa) {
    if (root == nullptr) return nullptr;

    if (root->right && root->right->data == x->data) return maxa;
    if (root->left && root->left->data == x->data) return root;

    if (root->data > x->data) {
        maxa = root;
        if (root->left) {
            return solve(root->left, x, maxa);
        }
    } else {
        if (root->right) {
            return solve(root->right, x, maxa);
        }
    }
    return nullptr;
}

// Main function to find the inorder successor
Node* inOrderSuccessor(Node* root, Node* x) {
    if (x->right != nullptr) {
        return sml(x->right);
    } else {
        Node* maxa = nullptr;
        return solve(root, x, maxa);
    }
}

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        
        int k;
        cin>>k;
        getchar();
        
        Node* kNode = search( head, k );
        Solution obj;
        Node* suc = obj.inOrderSuccessor(head, kNode);
        
        if( suc == NULL ) cout<< "-1";
        else cout<< suc->data;
        cout << endl;
    }
    
    return 1;
}
// } Driver Code Ends
