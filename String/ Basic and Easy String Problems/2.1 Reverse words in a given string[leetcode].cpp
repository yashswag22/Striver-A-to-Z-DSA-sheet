class Solution {
public:
    string reverseWords(string str) {
        
	int n = str.size();
	string ans="";
	if(n==0)
	return "";
	string temp ="";
	for(int i=0;i<n;i++)
	{
		if(str[i]!=' ')
		 temp+=str[i];
		 

        if (str[i] ==' ' && temp.size() != 0 && ans.size() != 0) {
          ans = temp +" "+ ans;
          temp = "";
        }
		 else if (str[i] == ' ' && temp.size() != 0 && ans.size() == 0) {
          ans = temp;
		  temp ="";
        }
		
	}

	if (temp.size() != 0 && ans.size() != 0) {
          ans = temp +" "+ ans;
          temp = "";
        }
	else if ( temp.size() != 0 && ans.size() == 0) {
          ans = temp;
		  temp ="";
        }
		
	return ans;
	

    }
};
