int findWays(vector<int>& arr, int k)
{
	int mod = 1000000000 + 7;
	int n = arr.size();
	int dp[n+1][k+1];

	// initialization 

	for(int i=0;i<n+1;i++){
		for(int j=0;j<k+1;j++){
			if(j == 0) dp[i][j]=1;
			else if( i == 0) dp[i][j] = 0;
		}
	}

	for(int i=1;i<n+1;i++){
		for(int j =0;j<k+1;j++){
			if(arr[i-1] <= j){
				dp[i][j] = ((1LL*dp[i-1][j- arr[i-1]]) + (1LL * dp[i-1][j]))%mod;
				
			}
			else
			dp[i][j] = (1LL*dp[i-1][j])%mod;
		}
	}
	return dp[n][k];
}
