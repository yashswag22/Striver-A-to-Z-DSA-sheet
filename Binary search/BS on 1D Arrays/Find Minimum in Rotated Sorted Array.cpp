int findMin(vector<int>& arr)
{
	int n= arr.size();
	int low =0,high=n-1;
	int mini = INT_MAX;
	// ******** my method *******
	// while(low <=high)
	// {
	// 	int mid = (low+high)/2;
	// 	mini = min(arr[mid],mini);

	// 	if(arr[mid]< arr[high])
	// 	high = mid-1;
	// 	else
	// 	low = mid + 1;
	// }
	// ******* striver method *******
	while(low <= high)
	{
		int mid = (low + high)/2;
		
		if(arr[low]<= arr[high])
		{
			mini = min(arr[low],mini);
			break;
		}

		if(arr[low]<= arr[mid])
		{
			mini = min(arr[low],mini);
			low = mid +1;
		}
		else
		{
			mini = min(arr[mid],mini);
			high = mid -1;
		}
	}
	return mini;
}
