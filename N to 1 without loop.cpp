void decarray(vector <int > &v, int n)
{
    if(n<1)
    return;
    v.push_back(n);
    decarray(v,--n);
}


vector<int> printNos(int x) {
   vector<int > v;
   decarray(v,x);
   return v;
}
