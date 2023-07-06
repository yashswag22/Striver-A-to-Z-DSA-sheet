
class Solution {
  public:
    long long reversedBits(long long X) {
        long long int reverse=0;
        int i=31;
        vector<int>v(32,0);
        while(X!=0)
        {
            int temp= X%2;
            v[i]=temp;
            i--;
            X/=2;
        }
        if(i== -1)
        i++;
        
        for(;i<32;i++)
        {
            reverse+=(v[i]*pow(2,i));
        }
        
        return reverse;
    }
};
