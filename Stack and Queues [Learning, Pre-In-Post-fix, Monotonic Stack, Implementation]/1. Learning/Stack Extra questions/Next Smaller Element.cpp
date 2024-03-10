#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int>s;
    vector<int>ans(arr.size());

    for(int i=0;i<n;i++)
    {
        if(s.empty()) s.push(i);
        else{
            while(!s.empty() && arr[i]<arr[s.top()]){
                ans[s.top()] = arr[i];
                s.pop();
            }
            s.push(i);
        }
    }

    ans [n-1]= -1;
    while(!s.empty()){
    ans[s.top()]=-1;
    s.pop();
    }

    return ans;

}
