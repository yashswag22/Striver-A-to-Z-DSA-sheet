class Solution{
public:	

	vector<int> bracketNumbers(string S)
	{
        vector<int> v;
        stack<int>s;
        int count =0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='(') {
                count++;
                v.push_back(count);
                s.push(count);
            }
            else if(S[i]==')')
            {
                v.push_back(s.top());
                s.pop();
            }
        }
        
        return v;
	}
};
