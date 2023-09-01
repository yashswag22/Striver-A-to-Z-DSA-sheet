Node *deleteLast(Node *list){
    Node* ptr = list;
    while(ptr->next!=nullptr)
    {
        if(ptr->next->next==nullptr)
        ptr->next = nullptr;
        else
        ptr = ptr->next;
    }
    return list;
}
