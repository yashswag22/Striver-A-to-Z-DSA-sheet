vector<int> nextGreaterElement(int n, vector<int>& arr) {
        stack<int>s;
        
        vector<int>ans(n,-1);
        
        for(int i=0;i<n;i++)
        {
            if(s.empty()) s.push(i);
            else{
                while(!s.empty() && arr[i]>arr[s.top()])
                {
                    ans[s.top()] = arr[i];
                    s.pop();
                }
                s.push(i);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(s.empty()) s.push(i);
            else{
                while(!s.empty() && arr[i]>arr[s.top()])
                {
                    ans[s.top()] = arr[i];
                    s.pop();
                }
                s.push(i);
            }
        }
        
        return ans;
    }
