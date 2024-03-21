#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    // 1 2 3 4 5

    // 3
    // 2
    // 1

    // 3 2 1 4 5
    stack<int>s;
    queue<int>ans;
    while(k--)
    {
        s.push(q.front());
        q.pop();
    }

    while(!s.empty())
    {
        ans.emplace(s.top());
        s.pop();
    }

    while(!q.empty())
    {
        ans.emplace(q.front());
        q.pop();
    }
    return ans;
}
