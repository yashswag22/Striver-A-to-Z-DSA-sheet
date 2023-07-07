class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
     
      vector<long long> v={0,0};
      long long a=A,b=B;
      while(A>0 && B>0)
      {
          if(A>B)
          A= A%B;
          else
          B=B%A;
      }
      
      if(A==0)
      v[1]=B;
      else if(B==0)
      v[1]=A;
      
      v[0]= ((a * b)/v[1]);
      
      return v;
    }
};
