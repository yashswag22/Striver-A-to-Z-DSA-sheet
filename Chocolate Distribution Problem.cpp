class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    
    sort(a.begin(),a.end(),greater<int>());
     long long ans= LLONG_MAX;
     int i=0;
     int j=i+(m-1);
     while(j<n)
     {   
         long long temp = a[i]-a[j];
         ans= min(ans,temp);
         i++;
         j=i+(m-1);
     }
     return ans;
    }   
};
