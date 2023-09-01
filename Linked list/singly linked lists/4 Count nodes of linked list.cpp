int length(Node *head)
{
	int count=0;
    while(head  != nullptr)
    {
        count++;
        head = head->next;
    }
    return count;
}
