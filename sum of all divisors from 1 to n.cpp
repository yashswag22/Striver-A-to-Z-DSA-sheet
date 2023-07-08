class Solution
{
public:
    long long sumOfDivisors(int N)
    {  long long count=0;
      for(int j=1;j<=N;j++)
      {
         int temp = N/j;
         count+=temp*j;
      }
      
      return count;
    }
};
