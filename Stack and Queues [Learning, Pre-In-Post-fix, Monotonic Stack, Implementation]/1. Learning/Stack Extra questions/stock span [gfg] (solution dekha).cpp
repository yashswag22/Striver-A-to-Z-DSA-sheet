vector<int> findStockSpans(vector<int>& price) {
    int n= price.size();
    stack<int> s;
       vector<int>v(n,1);
       
       for(int i=n-1 ;i>=0;i--){
           if(s.empty()) s.push(i);
           else
           {
               while(!s.empty() && price[i]>=price[s.top()])
               {
                   v[s.top()] = s.top()-i;
                   s.pop();
               }
               s.push(i);
           }
       }
       
       //v[0]=1;
       while(!s.empty())
       {
           v[s.top()] =v[s.top()]+s.top();
           s.pop();
       }
       
       return v;
}
