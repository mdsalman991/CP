 long long int dp[1001][1001];int mod=1e9+7;
   long long int solve(string s,int i,int j)
   { 
       if(i>j)return 0;
       if(i==j)return 1;
       if(dp[i][j]!=-1)return dp[i][j];
       
       if(dp[i+1][j]==-1)
       dp[i+1][j]=solve(s,i+1,j)%mod; 
       
       if(dp[i][j-1]==-1)
       dp[i][j-1]=solve(s,i,j-1)%mod; 
        
        
       if(s[i]==s[j])
       dp[i][j]=(1+dp[i+1][j]+dp[i][j-1])%mod;
       else
       {
           if(dp[i+1][j-1]==-1)
           dp[i+1][j-1]=solve(s,i+1,j-1);
           
           dp[i][j]=(mod+dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1])%mod; 
       } 
       
       return dp[i][j];
   }
    long long int  countPS(string str)
    {
       //Your code here
       memset(dp,-1,sizeof(dp));
       return solve(str,0,str.length()-1);
    }
	// count palindromic subsequences