void sortedInsert(int temp, stack<int> &s){
    // Base case: If stack is empty or temp is greater than or equal to the top element, insert temp
    if (s.empty() || temp >= s.top()) {
        s.push(temp);
        return;
    }
    // If temp is smaller than the top element, pop the top and recurse
    int t = s.top();  // Get the top element
    s.pop();          // Remove it from the stack
    sortedInsert(temp, s);  // Recurse to insert temp
    s.push(t);         // Push the popped element back into the stack
   
}

void SortedStack :: sort()
{
    if (s.empty()) return;

        // Pop the top element
        int t = s.top();
        s.pop();

        // Recursively sort the rest of the stack
        sort();

        // Insert the popped element in the sorted position
        sortedInsert(t, s);
}
