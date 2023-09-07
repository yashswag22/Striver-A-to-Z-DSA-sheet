#include<bits/stdc++.h>
bool detectCycle(Node *head)
{
	//*********** this solution is not correct for duplicate input case ***********
    // Node * tt =head;
    // unordered_map <int,int>mpp;
    // while(tt!=nullptr)
    // {
    //     mpp[tt->data]++;
    //     if(mpp[tt->data]>=2)
    //     return true;
    //     tt=tt->next;
    // }
    // return false;



    // ********** space complaxity = O(n) ********
    // set <Node*> s;
    // Node* t = head;
    // while(t!=nullptr)
    // {
       
    //     if(s.find(t)!=s.end())
    //     return true;
    //      s.insert(t);
    //      t=t->next;
    // }
    // return false;

    // ********** SPACE COMPLAXITY = o(1) *************
    Node * fast = head;
    Node * slow = head;
    if(head == nullptr || head->next==nullptr)
    return false;

    while(fast!=nullptr && slow != nullptr)
    {

         fast=fast->next;
         if(fast!=nullptr)
         fast=fast->next;
        slow  = slow ->next;
        if(fast == slow)
        return true;
       
    }
    return false;
}
