class Solution{
    public:
    int removeConsecutiveSame(vector <string > v) 
    {
       stack<string> s;
       for(int i=0;i<v.size();i++)
       { 
         string temp = v[i];  
        
         if(s.empty()) s.push(temp);
         else
         {
             if(temp == s.top()){
                 s.pop();
             }
             else
             s.push(temp);
         }
       }
       
       int count =0;
       while(!s.empty()){
           count ++;
           s.pop();
       }
       
       return count;
    } 
};
