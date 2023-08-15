vector<int> alternateNumbers(vector<int>&a) {
   int n=a.size();
   int i=0,j=0;
   while(a[i]<0)
   i++;
   while(a[j]>0)
   j++;

   vector<int>v;
   for(int k=0;k<n;k++)
   {
   if (k % 2 == 0) {
     v.push_back(a[i]);
     i++;
     while(a[i]<0)
      i++;     
   }
   else{
       v.push_back(a[j]);
       j++;
        while(a[j]>0)
         j++;
   }
   }

   return v;
}
