int minSubsetSumDifference(vector<int>& arr, int n)
{
	int range = 0;
	for(int i=0;i<arr.size();i++)
	range += arr[i];

	bool dp[n+1][range+1];

	for(int i=0;i<n+1;i++)
		for(int j =0;j< range+1;j++)
			if(j == 0) dp[i][j] = true;
			else if(i == 0) dp[i][j] = false;

    for(int i=1;i<n+1;i++){
		for(int j=1;j<range+1;j++){
			if(arr[i-1] <= j)
			dp[i][j] = (dp[i-1][j- arr[i-1]] || dp[i-1][j]);
			else
			dp[i][j] = dp[i-1][j];
		}
	}

	vector<int>v;

	for(int i = 0;i<=range/2;i++){
		if(dp[n][i] == true) v.push_back(i);
	}

	int ans = INT_MAX;

	for(int i=0;i<v.size();i++)
	{
		ans = min(ans,(range - 2*v[i]));
	}
	return ans;
}
