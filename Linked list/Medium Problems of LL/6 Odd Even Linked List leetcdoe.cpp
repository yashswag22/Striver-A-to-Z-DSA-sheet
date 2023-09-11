class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
      return head;
        ListNode* even = nullptr;
        ListNode * odd = nullptr;
        ListNode * fodd = nullptr;
        ListNode * feven = nullptr;
        int count =0;
        int ocount =0;
        int ecount =0;
        ListNode * curr = head;
        while(curr != nullptr)
        {   
            count ++;
            ListNode* t = curr; // temporary node
            curr = curr->next;

            if(count %2 != 0 && ocount ==0)
            {
                odd= t;
                fodd =t;
                ocount++;
            }
            else if(count %2 ==0 && ecount ==0)
            {
                even = t;
                feven =t;
                ecount++;
            }
            else if(count %2 != 0 && ocount !=0)
            {
                odd ->next = t;
                odd = t;
            }
            else if(count %2 == 0 && ecount !=0)
            {
                even ->next = t;
                even = t;
            }
        }
        if(ecount!=0)
        even ->next = nullptr;
        if(ocount!=0)
        {
            odd ->next = feven;
            return fodd;
        }
        return feven;

    }
};
