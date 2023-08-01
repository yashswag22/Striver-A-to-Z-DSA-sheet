#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n=a.size();
    int m=b.size();
    vector<int>v;
    int i=0,j=0;
     if(a[i]<b[j])
        { 
            v.push_back(a[i]);
            i++;
        }
        else if(b[j]<a[i])
        {
            v.push_back(b[j]);
            j++;
        }
        else if(b[j]==a[i])
        {
            v.push_back(a[i]);
            i++;
            j++;
        }
    while(i<n && j<m)
    {
        if(a[i]<b[j] )
        { if(a[i]== v[v.size()-1])
                i++;
           else{     
            v.push_back(a[i]);
            i++;
           }
        }
        else if(b[j]<a[i])
        {   if(b[j]== v[v.size()-1])
                j++;
            else {v.push_back(b[j]);
            j++;
            }
        }
        else if(b[j]==a[i])
        {if(a[i]== v[v.size()-1])
                i++;
            else{v.push_back(a[i]);
            i++;
            j++;
            }
        }
    }

    for(;i<n;i++)
    { if(a[i]== v[v.size()-1])
                i++;
      else{ v.push_back(a[i]);
      }
    }
    for(;j<m;j++)
    { if(b[j]== v[v.size()-1])
                j++;
                else{
         v.push_back(b[j]);
                }
    }
    return v;
}
