#include<bits/stdc++.h>
bool isAnagram(string str1, string str2)
{      if( str1.size() != str2.size())
        return false;
        // ------------ method 1 ------------
    // sort(str1.begin(),str1.end());
    // sort(str2.begin(),str2.end());

    // if(str1 == str2) 
    // return true;
    // else 
    // return false;

       // ---------- method 2 ----------------
    else
    {
        unordered_map<char,int>mpp;

        for(int i =0;i<str1.size();i++)
        {
            mpp[str1[i]]++;
        }

        for(int i =0;i<str2.size();i++)
        {
            mpp[str2[i]]--;
        }

        for(int i =0;i<str2.size();i++)
        {
            if(mpp[str2[i]] != 0)
            return false;
        }
        return true;
    }
}
