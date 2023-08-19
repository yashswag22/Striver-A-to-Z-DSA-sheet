int lowerBound(vector<int> arr, int n, int x) {
	int cur_indx=n;
	int i=0,j=n-1;
	while(i<=j)
	{
		int mid = (i+j)/2;
		if(arr[mid]>=x)
		{
			cur_indx = min(mid,cur_indx);
			j = mid-1;
		}
		else if(arr[mid]<x)
		{
			i=mid+1;
		}
	}
	return cur_indx;
}
