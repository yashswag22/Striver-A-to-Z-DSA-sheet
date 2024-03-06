class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int>s;
        for(int i=0;i<arr.size();i++){
            if(s.empty()) s.push(arr[i]);
            else{
                if(arr[i]>=0  && s.top()>=0) s.push(arr[i]);
                else if(arr[i]>=0 && s.top()<0) s.pop();
                else if(arr[i]<0 && s.top() <0) s.push(arr[i]);
                else if(arr[i]<0 && s.top()>=0) s.pop();
            }
            
        }
        
        vector<int>v(s.size());
        
        while(!s.empty())
        {
            v[s.size()-1] = s.top();
            s.pop();
        }
        
        return v;
    }
};
