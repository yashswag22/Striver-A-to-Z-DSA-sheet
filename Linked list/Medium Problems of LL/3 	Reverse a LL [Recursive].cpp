Node * first = nullptr;
// void recursive_reverse1(Node * cur, Node * t)
// {
//     if(cur == nullptr){
//         first= t;
//     }
//     else{
//         recursive_reverse(cur->next, cur);
//          cur->next=t;
//     }
       
// }


 Node* recursive_reverse2(Node * cur, Node * t)
 {
     if(cur == nullptr)
     return t;
     Node * nxtnode = cur->next;
     cur->next =t;
     return (recursive_reverse2(nxtnode, cur));

 }
Node* reverseLinkedList(Node *head)
{
     if(head == nullptr)
    return nullptr;
    Node* t = nullptr;
    Node * cur = head;

    // *********** iterative method ****************
//     while(head !=nullptr)
//     {
//         cur = head;
//         head = head->next;
//         cur->next = t;
//         t = cur;
//     }
//     return cur;



         // *************** recursive method *********** 
             // ******** method 1 (while return time) *******
    //  recursive_reverse1(cur,t);
    //  return first;
  

        // *********  method 2 (while return time) **********
        return recursive_reverse2(head,t); 


}
