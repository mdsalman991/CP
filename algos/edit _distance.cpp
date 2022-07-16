int dp[1001][1001];
    int solve(string s, string t , int i,int j){
        if(i==-1) return j+1;
        if(j==-1) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]) return dp[i][j] = solve(s,t,i-1,j-1);
        int a = solve(s,t,i-1,j-1); //replace
        int b = solve(s,t,i,j-1); // insert
        int c = solve(s,t,i-1,j); // remove
        return dp[i][j] = 1 + min(a,min(b,c));
    }
    int editDistance(string s, string t) {
        // Code here
        memset(dp,-1,sizeof(dp));
        int m = s.length();
        int n = t.length();
        return solve(s,t,m-1,n-1);
    }
	// edit distance dp