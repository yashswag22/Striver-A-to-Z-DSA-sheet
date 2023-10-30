class Solution {
public:
    bool rotateString(string p, string q) {
        int siz1 = p.size();
    int siz2 = q.size();
    if(siz1!=siz2) return 0;
    else {
      string temp = p+p;
      for(int i=0;i< p.size();i++)
      {
          string temp2 = temp.substr(i,siz2);
          if(temp2 == q)
          return 1;
      }
      return 0;
    }
    }
};
