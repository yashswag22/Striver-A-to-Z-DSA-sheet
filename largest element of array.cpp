#include <bits/stdc++.h> 

int largestElement(vector<int> &arr, int n) {
   int max = INT_MIN;
   for(int i=0;i<arr.size();i++)
   {
       if(arr[i]>max)
       max=arr[i];
   }
  return max;

}
