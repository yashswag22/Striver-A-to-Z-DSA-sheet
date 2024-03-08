class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char>tt;

        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && s[i]=='#')
            {
                 st.pop();
               
            }
            else if(s[i]!='#')
            st.push(s[i]);
        }

         for(int i=0;i<t.size();i++)
        {
            if(!tt.empty() && t[i]=='#')
            {
                 tt.pop();
               
            }
           else if(t[i]!='#')
            tt.push(t[i]);
        }
        if(st.size()!= tt.size()) return false;
        else
        {
            while(!st.empty())
            {
              if(st.top()!= tt.top()) return false;
              st.pop() ;
              tt.pop();
            }
            return true;
        }
    }
};
