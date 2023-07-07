class Solution {
  public:
    string armstrongNumber(int n){
        int x=n,ans=0;
        while(x!=0)
        {
            int temp = x%10;
            ans+=(pow(temp,3));
            x/=10;
        }
        
        if(ans==n)
        return "Yes";
        else
        return "No";
    }
};
