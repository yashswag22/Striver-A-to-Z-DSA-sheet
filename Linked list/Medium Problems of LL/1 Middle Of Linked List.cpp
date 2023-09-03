Node *findMiddle(Node *head) {
    Node * t = head;
    int count =0;
    while(t!=nullptr)
    {
        count++;
        t = t->next;
    }
    t = head;
    // if(count %2 ==0)
    // count = (count/2);
    // else 
    // count/=2;
    count/=2;
    while(count --)
    {
        t = t->next;
    }
    return t;
}
