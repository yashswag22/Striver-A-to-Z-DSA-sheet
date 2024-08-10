bool canPartition(vector<int> &arr, int n)
{
	int sum =0;
	for(int i=0;i<n;i++){
			sum += arr[i];
	}

	if(sum%2 != 0) return false;
	else{
		sum = sum/2;
		bool dp[n+1][sum+1];

		for(int i=0;i<n+1;i++){
			for(int j=0;j<sum+1;j++){
				if(j == 0) dp[i][j] = true;
				else if(i == 0) dp[i][j] = false;
			}
		}

		for(int i=1;i<n+1;i++){
			for(int j=1;j<sum+1;j++){

				if(arr[i-1] <= j){
					dp[i][j] = (dp[i-1][j - arr[i-1]] || dp[i-1][j]);
				}
				else
				dp[i][j] = dp[i-1][j];
			}
		}

		return dp[n][sum];
	}
}
