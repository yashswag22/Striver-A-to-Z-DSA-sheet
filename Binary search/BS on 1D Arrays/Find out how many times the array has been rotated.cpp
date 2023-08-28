#include <bits/stdc++.h>
int findKRotation(vector<int> &arr){
    int n = arr.size();
    int low = 0,high=n-1;
    int mini = INT_MAX;
    int indx =0;
    	while(low <=high)
	{
		int mid = (low+high)/2;
        if(arr[mid]< mini)
        {
            mini = arr[mid];
            indx = mid;
        }
		
		if(arr[mid]< arr[high])
		high = mid-1;
		else
		low = mid + 1;
	}
    return indx;
}
