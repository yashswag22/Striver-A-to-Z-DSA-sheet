class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            if (st.empty())
                st.push(s[i]);
            else {
                if (s[i]== '('){
                    // if(st.top() == ')') st.pop();
                    // else
                    st.push(s[i]);
                }
                else if(s[i]== ')'){
                    if(st.top() == '(') st.pop();
                    else
                    st.push(s[i]);
                }
            }
        }
        
        return st.size();
    }
};
