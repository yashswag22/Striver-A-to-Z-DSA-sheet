#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
   long long max_sum=INT_MIN;
   long long sum=0;
   for(int i=0;i<n;i++)
   {
       sum+=arr[i];
       if(sum<0)
       sum=0;
       max_sum=max(max_sum,sum);
   }
   return max_sum;
}
