unordered_map<string,int> dp;
    int solve(string A, vector<string> &B){
        int n = A.length();
        if(n==0) return 1;
        if(dp[A]!=0) return dp[A];
        for(int i=1;i<=n;i++){
            int flag = 0;
            string ss = A.substr(0,i);
            for(int j=0;j<B.size();j++){
                if(ss.compare(B[j])==0){
                    flag = 1 ;
                    break;
                }
            }
            if(flag == 1 && solve(A.substr(i,n-i),B)==1) return dp[A] = 1;
        }
        return dp[A] = -1;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        int x = solve(A,B);
        if(x==1) return 1;
        return 0;
    }
	
	//word break