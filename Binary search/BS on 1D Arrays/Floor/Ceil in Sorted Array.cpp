pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	int flor= -1;
	int c_ling = INT_MAX;

	for(int i=0;i<n;i++)
	{
		if(arr[i]<=x)
		flor = max(arr[i],flor);

		if(arr[i]>=x)
		c_ling = min(c_ling,arr[i]);
	}
	if( c_ling== INT_MAX)
	c_ling = -1;
	pair<int,int>p;
	p.first=flor;
	p.second = c_ling;
	return p;
}
