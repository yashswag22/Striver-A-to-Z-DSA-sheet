int searchInLinkedList(Node<int> *head, int k) {
    while(head !=0)
    {
        if(head->data ==k)
        return 1;

        head = head->next;
    }
    return 0;
}
