int findMin(vector<int>& arr)
{
	int n= arr.size();
	int low =0,high=n-1;
	int mini = INT_MAX;
	while(low <=high)
	{
		int mid = (low+high)/2;
		mini = min(arr[mid],mini);

		if(arr[mid]< arr[high])
		high = mid-1;
		else
		low = mid + 1;
	}

	return mini;
}
