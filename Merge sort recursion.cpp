void merge(vector<int> &arr,int low,int mid, int high)
{
   vector<int> v;
   int left=low;
   int right=mid+1;
   while(left<= mid && right<=high)
   {
       if(arr[left]<=arr[right]){
       v.push_back(arr[left]);
       left++;
     }
     else
     {
         v.push_back(arr[right]);
         right++;
     }
   } 

   while(left<=mid)
   {
       v.push_back(arr[left]);
       left++;
   }  

   while(right<=high)
   {
       v.push_back(arr[right]);
         right++;
   }

   for(int i=low;i<=high;i++)
   {
       arr[i]=v[i-low];
       
   }
   return;
}





void mergeSort(vector<int>& arr, int l, int r) {
   if(l==r)return;
   int mid= (l+r)/2;
   mergeSort(arr,l,mid);
   mergeSort(arr,mid+1,r);
   merge(arr,l,mid,r);
   return;
}
