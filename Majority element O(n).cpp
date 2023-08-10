#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	int n= v.size();
	int ans =0;
	int cnt=0;
	int elementa =0;
	for(int i=0;i<n;i++)
	{
          if (cnt == 0) {
            elementa = v[i];
            cnt++;
          } else if (elementa == v[i])
            cnt++;
          else
            cnt--;
	}
        return elementa;
}
