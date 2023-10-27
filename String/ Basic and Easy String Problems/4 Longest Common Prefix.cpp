string commonPrefix(vector<string>& arr,int n){
	string s = arr[0];
	for(int i=1;i<n;i++)
	{
		string temp = "";
		string cur = arr[i];

		int a = s.size();
		int b = cur.size();

		int siz = min(a,b);
		for(int j = 0;j<siz;j++)
		{
			if(s[j]==cur[j]) // or if(s[j]==cur[j])
			temp+=s[j];
			else
			break;
		}	

		s = temp;

	}
	if(s == "") return "-1";
	return s;
}
