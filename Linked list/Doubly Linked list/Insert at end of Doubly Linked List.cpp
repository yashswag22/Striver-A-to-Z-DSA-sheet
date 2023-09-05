Node * insertAtTail(Node *head, int k) {
    Node * temp = head;
    if(head == nullptr){
        head = new Node(k);
        return head;
    }
    
    while(temp -> next!=nullptr)
    {
        temp = temp->next;
    }
    Node * n = new Node;
    temp ->next = n;
    n->value= k;
    n->prev = temp;
    n->next = nullptr;
    return head;
}
