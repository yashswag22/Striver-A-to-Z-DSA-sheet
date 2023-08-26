#include <bits/stdc++.h>
int firstfx(vector<int>&arr,int n, int k)
{
  int low=0,high=n-1,first=-1;
  while(low<=high)
  {
    int mid = (low+high)/2;
    if(arr[mid]==k)
    {
      first = mid;
      high = mid -1;
    }
    else if(arr[mid] > k)
    high = mid -1;
    else
    low = mid +1;
  }

  return first;
}

int secondfx(vector<int>&arr,int n, int k)
{
  int low=0,high=n-1,second=-1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == k) {
    second = mid;
    low = mid + 1;
    } else if (arr[mid] > k)
    high = mid - 1;
    else
    low = mid + 1;
  }
  return second;
}
int count(vector<int>& arr, int n, int x) {
	int first = firstfx(arr, n, x);
  if( first == -1 ) return 0;
  int second = secondfx(arr, n, x);
  return (second - first + 1);
}
