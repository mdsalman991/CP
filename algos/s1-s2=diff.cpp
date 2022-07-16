
int subsetSum(int a[], int n, int sum)
{
  // return the count of subset with sum == sum
  // dp
  /// intitalize the matrix
  int dp[n+1][sum+1];
  dp[0][0] = 1;
  for(int i=1;i<n+1;i++){
   	dp[i][0] = 1;
  }
  for(int i=1;i<sum+1;i++){
  	dp[0][i] = 0;
  }
  for(int i=1;i<n+1;i++){
  	for(int j =1;j<sum+1;j++){
		if(a[i-1] <=j){
			dp[i][j] = dp[i-1][j-a[i-1]] + dp[i-1][j];
		}
		else dp[i][j] = dp[i-1][j];
	}
  }
  return dp[n][sum];
}
int countWithGivenSum(int arr[ ], int n, int diff)
{
    int sum = 0;
	// find the count of subsets with given diff
	//find sum first
	for(int i=0;i<n;i++) sum += arr[i];
	int reqsum = (sum + diff)/2;
	return subset(arr,n,reqsum);
}