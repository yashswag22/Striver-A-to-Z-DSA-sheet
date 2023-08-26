class Solution {
public:
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
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        int first = firstfx(nums, n, target);
  if( first == -1 ) return {-1, -1};
  int second = secondfx(nums, n,target);
  return {first,second};
    }
};
