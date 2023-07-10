void fibo(vector<int>&v, int n,int i)
{
 if(i<n)
   {
        if(i== 0)
        v.push_back(0);
        else if(i==1)
        v.push_back(1);
        else
        v.push_back(v[i-1]+v[i-2]);
        i++;
        fibo(v,n,i);
   }
   else
   return;

}





vector<int> generateFibonacciNumbers(int n) {
    vector<int>v;
    fibo(v,n,0);
    return v;

}
