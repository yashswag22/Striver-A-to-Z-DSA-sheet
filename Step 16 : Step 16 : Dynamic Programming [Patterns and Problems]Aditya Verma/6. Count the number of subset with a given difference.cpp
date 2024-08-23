
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
  
  int countsubsetsum(vector<int>& arr, int k) {
    int mod = 1000000007;
    int n = arr.size();
    
    // Use a vector of vectors instead of a static array
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    // Initialization
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (arr[i - 1] <= j) {
                dp[i][j] = (dp[i - 1][j - arr[i - 1]] + dp[i - 1][j]) % mod;
            } else {
                dp[i][j] = dp[i - 1][j] % mod;
            }
        }
    }
    return dp[n][k];
}
  
  
  int countPartitions(int n, int d, vector<int>& arr) {
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        
        if((sum + d)%2 != 0) return 0;
        
        int s1 = (sum+d)/2;
        
        
        int ans = countsubsetsum(arr, s1);
        return ans;
    }
};
