class Solution {
public:
 long long solve (long long x, long long n){
         if(n == 0) return 1;
         else if(n==1) return x%1000000007;

        long long ans =1;
        long long know = solve(x,n/2)%1000000007;

        if(n%2)
        ans = (ans*x)%1000000007;

        return (ans*((know*know)%1000000007))%1000000007;

    }

    long long countGoodNumbers(long long n) {
        long long ans = solve(20,n/2);
        if(n%2)
        ans = (ans*5)%1000000007;
        
        return ans;
    }
};
