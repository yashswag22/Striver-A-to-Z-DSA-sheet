//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
  stack<int>s;
  int mini = INT_MAX;
  for(int i=0;i<n;i++)
  {
      mini = min(arr[i],mini);
      s.push(mini);
  }
  
  return s;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
