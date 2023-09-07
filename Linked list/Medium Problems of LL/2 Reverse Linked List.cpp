
Node* reverseLinkedList(Node *head)
{  if(head == nullptr)
    return nullptr;
    Node* t = nullptr;
    Node * cur = head;
    while(head !=nullptr)
    {
        cur = head;
        head = head->next;
        cur->next = t;
        t = cur;
    }
    return cur;
}
