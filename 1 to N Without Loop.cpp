void createarray (vector<int> &v,int n)
{
   if(n<1)
   return;
    
    createarray(v,n-1);
    v.push_back(n);
   return ;
}


vector<int> printNos(int x) {
  vector<int> v;
  createarray(v,x);
  return v;
   
}
