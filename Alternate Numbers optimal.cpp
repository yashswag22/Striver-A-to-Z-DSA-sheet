vector<int> alternateNumbers(vector<int>&a) {
   int n=a.size();
//    *************** method 1 ****************
//    int i=0,j=0;
//    while(a[i]<0)
//    i++;
//    while(a[j]>0)
//    j++;

//    vector<int>v;
//    for(int k=0;k<n;k++)
//    {
//    if (k % 2 == 0) {
//      v.push_back(a[i]);
//      i++;
//      while(a[i]<0)
//       i++;     
//    }
//    else{
//        v.push_back(a[j]);
//        j++;
//         while(a[j]>0)
//          j++;
//    }
//    }

//    return v;
//  ****************** method 2 ******* optimal ***********

  int i=0,j=1;
  vector<int>ans(n,0);
  for(int k=0;k<n;k++)
  {
      if(a[k]<0)
      {
          ans[j]=a[k];
          j+=2;
      }
      else{
          ans[i]=a[k];
          i+=2;
      }
  }
  return ans;
}
