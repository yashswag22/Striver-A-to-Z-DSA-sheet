#include <bits/stdc++.h> 
// dp[N+1][W+1]
int dp[101][1001];


//  ---------- recursive solution 

int solve(vector<int> weight, vector<int> value, int n, int maxWeight){
     
	 if (n == 0 || maxWeight == 0) return 0;

        if(dp[n][maxWeight]!= -1)
        return dp[n][maxWeight];

    if (weight[n - 1] <= maxWeight) {
        return dp[n][maxWeight] = max(
            value[n - 1] + solve(weight, value, n - 1, maxWeight - weight[n - 1]),
            solve(weight, value, n - 1, maxWeight)
        );
    } else {
        return dp[n][maxWeight] = solve(weight, value, n - 1, maxWeight);
    }
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{  
    memset(dp, -1, sizeof(dp));

    int ans = solve(weight,value,n,maxWeight);
    return ans;
}
