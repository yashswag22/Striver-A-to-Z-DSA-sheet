#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
   queue<int> ans;
    stack<int>temp;
   while(!q.empty())
   {
       int tempp = q.front();
       q.pop();
       temp.push(tempp);
   }

   while(!temp.empty())
   {
       int tempp = temp.top();
       temp.pop();
       ans.push(tempp);
   }

   return ans;
}
