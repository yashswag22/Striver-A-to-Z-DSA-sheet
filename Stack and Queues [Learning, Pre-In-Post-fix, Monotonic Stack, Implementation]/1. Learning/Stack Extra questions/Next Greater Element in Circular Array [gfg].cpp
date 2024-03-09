class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        stack<int> s;
        vector<long long> v(n);
        
        for(int i=0;i<n;i++)
        {
            //if(i== n-1)  v[i]=-1;
            if(s.empty()) s.push(i);
            else{
                while(!s.empty()  && arr[i]>arr[s.top()] ){
                    v[s.top()] = arr[i];
                    s.pop();
                }
                s.push(i);
            }
        }
        
        v[n-1] = -1;
        
        while(!s.empty())
        {
            v[s.top()]=-1;
            s.pop();
        }
        
        return v;
    }
};
