#include<bits/stdc++.h>
vector<int> nextGreaterPermutation(vector<int> &a) {
   int n=a.size();
   int ind = -1;
   for(int i=n-1;i>0;i--)
   {
     if (a[i - 1] < a[i]) {
       ind = i - 1;
       break;
     }
   }
   if (ind == -1) {
     reverse(a.begin(), a.end());
     return a;
   }

   else{
       for(int i=n-1;i>ind;i--)
       {
           if(a[i]>a[ind])
           {
               swap(a[i],a[ind]);
               break;
           }
       }

       reverse(a.begin()+(ind+1),a.end());
       return a;
   }

}
