class Solution {
public:
    string reverseWords(string s) {
        stack<string> balti;
        string st = "";
        for(int i =0;i<s.size();i++){
            if(s[i] == ' '){
                if(st.size()>0){
                    balti.push(st);
                    balti.push(" ");
                    st= "";
                }
            }
            else{
                st += s[i];
            }
        }
        if(st.size()>0) balti.push(st);

        string ans = "";

        while(!balti.empty()){
            if(ans.size() == 0){
                string temp = balti.top();
                balti.pop();

                if(temp == " ")
                continue;
                else{
                    ans += temp;
                }
                
            }
            else{
                ans += balti.top();
                balti.pop();
            }
        }
        return ans;
    }
};
