#include<bits/stdc++.h>

void solve (vector<string> &v, string s, string p )
{
   
    if(p == "") return;

    v.push_back(s+p.substr(0,1));

    if(p.size()== 1) return;

    solve(v,s+p.substr(0,1),p.substr(1,p.size()-1));
    solve(v,s,p.substr(1,p.size()-1));
   
}





vector<string> generateSubsequences(string s)
{
    vector<string> v;
    v.push_back("");
    for(int i=0;i<s.size();i++)
    {
        if(i == s.size()-1)
        v.push_back(s.substr(i, 1));
        else {
        v.push_back(s.substr(i, 1));
        solve(v, s.substr(i, 1), s.substr(i + 1, s.size() - 1 - i));
        }
    }
   // solve(v,"",0,s);
    sort(v.begin(),v.end());
    return v;

}
