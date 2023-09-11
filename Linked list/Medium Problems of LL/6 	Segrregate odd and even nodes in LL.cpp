/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* segregateEvenOdd(Node* head)
{
    Node* even = nullptr;
    Node * odd = nullptr;
    Node * fodd = nullptr;
    Node * feven = nullptr;
    int ocount =0;
    int ecount =0;
    Node* curr = head;
    while(curr != nullptr)
    { Node * t = curr;
       curr= curr->next;

      if (t->data % 2 != 0 && ocount == 0) {
        odd = t;
        fodd = t;
        ocount++;
        // t = t->next;
      }
      else if(t->data%2==0 && ecount==0)
      {
          even  = t;
          feven = t;
          ecount++;
        //   t = t->next;
      }
      else if(t->data % 2 != 0 && ocount != 0)
      {
          odd->next = t;
          odd= t;
        //   t = t->next;
      }
      else if(t->data%2==0 && ecount!=0)
      {
          even->next = t;
          even = t;
        //   t = t->next;
      }
    }
    even ->next = fodd;
    odd->next = nullptr;
    return feven;
}
