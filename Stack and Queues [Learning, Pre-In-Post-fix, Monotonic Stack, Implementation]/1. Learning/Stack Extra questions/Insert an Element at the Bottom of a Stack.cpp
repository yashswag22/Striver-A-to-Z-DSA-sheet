class Solution{
public:
    stack<int> insertAtBottom(stack<int> myStack,int x){
         stack <int>s;
    while(!myStack.empty())
    {
        s.push(myStack.top());
        myStack.pop();
    }

    myStack.push(x);
    while(!s.empty()){
        myStack.push(s.top());
        s.pop();
    }
    return myStack;
    }
};
