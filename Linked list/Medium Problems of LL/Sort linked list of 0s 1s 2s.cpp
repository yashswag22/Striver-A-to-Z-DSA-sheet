/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
   int a =0;
   int b=0;
   int c=0;
   Node* temp = head;
   while (temp != nullptr) {
     if (temp->data == 0)
       a++;
     else if (temp->data == 1)
       b++;
     else
       c++;

     temp = temp->next;
   }

   Node *temp2 = head;
   while (a--){
     temp2->data = 0;
     temp2 = temp2->next;
    }
    while(b--){
        temp2->data = 1;
     temp2 = temp2->next;
    }
    while(c--){
        temp2->data = 2;
     temp2 = temp2->next;
    }
    
    return head;

}
