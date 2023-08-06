#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& a, int k){
    map<long long,int> presumMap;
    long long sum =0;
    int len =0;
    for(int i=0;i<a.size();i++)
    {
        sum += a[i];
        if(sum == k)
        len = max (len , i+1);
        
        long long rem = sum -k;
        if(presumMap.find(rem) != presumMap.end())
        {
            int sublen = i - presumMap[rem];
            len = max(len, sublen);
        }
        if(presumMap.find(sum)==presumMap.end())
        {
            presumMap[sum]= i;
        }
    }
    return len;
}
