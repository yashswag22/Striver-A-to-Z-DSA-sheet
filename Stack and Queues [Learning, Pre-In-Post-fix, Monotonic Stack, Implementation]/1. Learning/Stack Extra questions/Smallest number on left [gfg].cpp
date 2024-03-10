class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        vector<int> ans(n,-1);
        stack<int>s;
        
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty()) s.push(i);
            else{
                while(!s.empty() && a[s.top()]>a[i]) {
                 ans[s.top()] = a[i];
                 s.pop();
                }
                
                 s.push(i);
            }
        }
        
        return ans;
    }
};
