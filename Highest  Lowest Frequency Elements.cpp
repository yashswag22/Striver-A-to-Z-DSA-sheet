#include<bits/stdc++.h>
using namespace std;
vector<int> getFrequencies(vector<int>& v) {
    map <int, int> mpp;

    vector<int>va(2);
    
    int n=v.size();

    for(int i=0;i<n;i++)
    {
        mpp[v[i]]++;
    }


    int min_freq =INT_MAX, min_freq_element =INT_MAX;
    int max_freq =INT_MIN, max_freq_element =INT_MAX;

    
    for (auto it : mpp) {

       if(it.second<min_freq)
       {
          min_freq=it.second;
           min_freq_element=it.first;
       }
     

        if(it.second> max_freq)
       {
           max_freq=it.second;
           max_freq_element=it.first;
       }
      
    }
   
    va[0]=max_freq_element;
    va[1]=min_freq_element;
  return va;
}
