Node* constructDLL(vector<int>& arr) {
   Node * head = new Node;
   head ->data = arr[0];
   head->prev = head->next = nullptr;
   Node * temp = head;
   for(int i=1;i<arr.size();i++)
   {
       Node * t = new Node;
       temp->next = t;
       t->data = arr[i];
       t->prev = temp;
       t->next=nullptr;
        temp = t;
   }
   return head;
}
