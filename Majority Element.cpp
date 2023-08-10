#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	int temp = v.size()/2;
	map<int,int>m;
	for(int i=0;i<v.size();i++)
	m[v[i]]++;
	int ans= INT_MIN;
	for(auto it:m)
	{
		if(it.second>=temp)
		ans = max(it.first,ans);
	}
	 return ans;
}
