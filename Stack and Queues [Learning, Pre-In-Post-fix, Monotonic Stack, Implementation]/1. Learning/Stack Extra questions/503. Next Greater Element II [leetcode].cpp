class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
        stack<int> s;
        vector<int> v(n,-1);
        
        for(int i=0;i<n;i++)
        {
           
            if(s.empty()) s.push(i);
            else{
                while(!s.empty()  && arr[i]>arr[s.top()] ){
                    v[s.top()] = arr[i];
                    s.pop();
                }
                s.push(i);
            }
        }
        
       for(int i=0;i<n;i++)
        {
           
           
           
                while(!s.empty()  && arr[i]>arr[s.top()] ){
                    v[s.top()] = arr[i];
                    s.pop();
                }
                
            
        }
        
       
         return v;
    }
};
