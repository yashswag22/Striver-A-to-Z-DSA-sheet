/****************************************************************

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


*****************************************************************/

class Stack
{
    //Write your code here

public:

    Node * top ;
    int size;

    Stack()
    {
        size =0;
        top = NULL;
    }

    int getSize()
    {
        return size;
    }



    bool isEmpty()
    {
        return top==NULL;
    }

    void push(int data)
    {
        size++;
        Node * temp = new Node(data);
        temp->next = top;
        top = temp;

    }

    void pop()
    {
        if(top != NULL)
        {
            Node * temp = top;
            top = top->next;
            delete temp;
            size--;
        }
    }

    int getTop()
    {
        if(top != NULL)
        return top->data;
        else return -1;
    }
};
