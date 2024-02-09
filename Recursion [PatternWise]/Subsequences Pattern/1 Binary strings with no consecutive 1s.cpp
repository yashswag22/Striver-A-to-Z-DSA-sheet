void solve(vector<string> &v,int n,string s)
{
   if(s.size()>n)
   return ;
   if(s[s.size()-1] == '1' )
   {
       
       s+="0";
       if(s.size()==n)
       v.push_back(s);
       solve(v,n,s);
   }
   else{
       
       string temp = s;
       s+="0";
       if(s.size()==n) v.push_back(s);
       temp += "1";
       if(temp.size() == n) v.push_back(temp);
       solve(v,n,s);
       solve(v,n,temp);
   }
}

vector<string> generateString(int N) {
   vector<string> v;
   if(N==1){
   v.push_back("0");
   v.push_back("1");
  }
    solve(v,N,"0");
    solve(v,N,"1");
    return v;
}
