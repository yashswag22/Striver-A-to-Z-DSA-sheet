class Solution {
public:
    bool isIsomorphic(string str1, string str2) {
        int siz1 = str1.size();
    int siz2 = str2.size();
    if(siz1 != siz2) return false;
    else{
       map<char,char>mpp;
        map<char,char>mpp2;

        for(int j=0;j<siz1;j++)
        mpp[str1[j]]= str2[j];

        for(int j=0;j<siz1;j++)
        mpp2[str2[j]]= str1[j];

        for(int i=0;i<siz2;i++)
        {
           if(mpp[str1[i]] != str2[i])
           return false;
        }

         for(int i=0;i<siz2;i++)
        {
           if(mpp2[str2[i]] != str1[i])
           return false;
        }

        return true;
    }
    }
};
