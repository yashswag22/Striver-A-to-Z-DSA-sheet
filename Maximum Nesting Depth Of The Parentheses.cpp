int maxDepth(string s) {
	int ans=0;
	int maxans = INT_MIN;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		ans++;
		else if(s[i]==')')
		ans--;

		maxans= max(ans,maxans);
	}
	return maxans;
}
