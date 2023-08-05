int traffic(int n, int m, vector<int> v) {
	int ans=0;
   int i=0;
   int j=0;
   int flip=0;
   while(i<n)
   {
       if(v[i]==0)
       {
           flip++;
       }

       while(flip >m)
       {  if(v[j]==0)
           flip --;
           j++;
       }

       ans = max(ans, (i-j+1));
       i++;
   }

   return ans;
}
