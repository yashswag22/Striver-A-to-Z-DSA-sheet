

void factarray(vector<long long> &v,long long n, long long fact,long long i)
{  
   i++;
   if(fact>n)
   return;
   else
   v.push_back(fact);

   factarray(v,n,fact*i,i);
}

vector<long long> factorialNumbers(long long n) {
   vector<long long >v;
   factarray(v,n,1,1);
   return v;
}
