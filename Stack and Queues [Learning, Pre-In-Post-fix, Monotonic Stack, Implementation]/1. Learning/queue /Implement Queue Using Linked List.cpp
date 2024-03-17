/**
 * Definition of linked list
 * class Node {
 * 
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 * 
 * Definition of Queue
 * struct Queue {
 *   Node* front;
 *   Node* rear;
 *   void push(int);
 *   int pop();
 *   
 *   Queue() {
 *       front = rear = NULL;
 *   }
 * };
 */

void Queue::push(int x) {
    if(front == NULL && rear == NULL){
        Node *  temp = new Node(x);
        //temp->next = nullptr;
        front = temp;
        rear = temp;
    }
    else {
     Node *  temp = new Node(x);
     rear->next = temp;
     rear= temp;
    }


}

int Queue::pop() {
    if(rear == NULL && front == NULL) return -1;
    else{
        if(rear == front){
        int temp = front->data;
        rear = nullptr;
        front = NULL;
        return temp;
        }
        else{
        int temp = front->data;
        front= front->next;
        return temp;
        }
    }
}
