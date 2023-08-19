int searchInsert(vector<int>& arr, int m)
{ int n= arr.size();
	int cur_indx=n;
	int i=0,j=n-1;
	while(i<=j)
	{
		int mid = (i+j)/2;
		if(arr[mid]>m)
		{
			cur_indx = min(mid,cur_indx);
			j = mid-1;
		}
		else if(arr[mid]<m)
		{
			i=mid+1;
		}
		else if(arr[mid]==m)
		return mid;
	}
	return cur_indx;
}
