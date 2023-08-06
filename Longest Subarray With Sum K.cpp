
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n= a.size();
    long long sum=0;
    int ans=0;
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        
      

        while(sum>k){
            sum-=a[j];
            j++;
        }

          if(sum== k)
        ans = max(ans,i-j+1);

        //  ans = max(ans,i-j+1);
    }

    return ans;
}
