
Node* inOrderSuccessor(Node* root, Node* x) {
    
    Node * succ = nullptr;
    
    while(root != nullptr){
        
        if(x->data >= root->data){
            root = root->right;   
        }
        else{
            succ = root;
            root = root->left;
        }
    }
    
    return succ;
}
