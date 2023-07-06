class Solution
{
	public:
		string is_palindrome(int n)
		{
		    string a="Yes",b="No";
		    string s= to_string(n);
		    int j= s.length();
		    int m=j-1; bool check =0;
		    for(int i=0;i<j/2;i++)
		    {
		        if(s[i]!=s[m-i])
		           { check=1;
		               break;
		           }
		    }
		    
		    if(check==0)
		    return a;
		    else
		    return b;
		}
};
