
Node* findIntersection(Node *firstHead, Node *secondHead)
{
   Node * d1 = firstHead;
   Node * d2 = secondHead;
    if(firstHead == nullptr || secondHead == nullptr)
   return nullptr;

   if(d1 == d2)
   return d1;
   while(d1 != nullptr && d2!= nullptr)
   {
       d1 = d1->next;
       d2 = d2->next;

       if(d1 == nullptr)
       d1 = secondHead;
       else if(d2 == nullptr)
       d2 = firstHead;

       if(d1 == d2)
       return d1;
   }
}
