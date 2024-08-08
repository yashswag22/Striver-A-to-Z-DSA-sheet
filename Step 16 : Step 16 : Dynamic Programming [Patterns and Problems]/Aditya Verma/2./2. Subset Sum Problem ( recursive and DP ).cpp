#include <bits/stdc++.h> 
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // ---------- Recursive ----------

    // if(k == 0) return true;
    
    // if(n == 0) return false;
    // // else if(n ==0 && k ==0) return true;

    // if(arr[n-1] <= k){
    //     return (subsetSumToK(n-1,k-arr[n-1], arr) || subsetSumToK(n-1,k, arr));
    // }
    // else
    // return subsetSumToK(n-1,k, arr);

    // ----------- DP ----------

    bool dp[n+1][k +1];
    // initialization
    for(int i =0;i<n+1;i++){
        for(int j =0; j<k+1;j++){
            if(j == 0) dp[i][j] = true;
            else if(i ==0 && j>0) dp[i][j] = false;
        }
    }

    // the second loop will start from 1,1  bcz no need to update the first raw and first column.

    for(int i=1;i<n+1;i++){
        for( int j =1;j<k+1;j++){
            if(arr[i-1] <= j)
            dp[i][j] = (dp[i-1][j- arr[i -1]] || dp[i-1][j]);
            else
            dp[i][j] = dp[i-1][j];
        }
    }

    return dp[n][k];
}
