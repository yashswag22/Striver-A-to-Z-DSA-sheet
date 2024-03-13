#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	
	
	public:
		
		stack<pair<int,int>>s;

		minStack() 
		{ 
			
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			int mini;
			if(s.empty()) mini = num;
			else{
				mini = min(num,s.top().second);
			}
			s.push({num,mini});
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(s.empty()) return -1;
			else{
			   int temp = s.top().first;
			   s.pop();
			   return temp;
			}
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(s.empty()) return -1;
			else{
			   int temp = s.top().first;
			   
			   return temp;
			}
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(s.empty()) return -1;
			else{
				return s.top().second;
			}
		}
};
