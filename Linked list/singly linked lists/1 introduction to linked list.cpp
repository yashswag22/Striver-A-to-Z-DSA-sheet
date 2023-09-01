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
 */

Node* constructLL(vector<int>& arr) {
    Node* head = new Node;
    head->data = arr[0];
    head->next=nullptr;
    Node* temp,*last;
    last = head;
    int n = arr.size();
    for(int i=1;i<n;i++)
    {
        temp = new Node;
        temp->data=arr[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
    return head;
}
