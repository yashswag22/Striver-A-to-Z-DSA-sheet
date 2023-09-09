int lengthOfLoop(Node *head) {
    if(head==nullptr || head->next==nullptr)
    return 0;
    Node * slow = head;
    Node * fast = head;
    while(fast->next!=nullptr && fast->next->next!=nullptr)
    {
        fast=fast->next->next;
        slow = slow->next;
        if(fast==slow)
        {
            Node*t = head;
            int count =0;
            while(t!=slow)
            {
                t=t->next;
                slow = slow->next;
            }
            t = t->next;
            while(t!=slow)
            {
                count++;
                t = t->next;
            }
            return ++count;
        }
    }
    return 0;
}
