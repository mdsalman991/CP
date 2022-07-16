 int solve(int i,int arr[],vector<int>&dp){
       if(i<0){
           return 0;
       }
       if(dp[i]!=-1)return dp[i];
       int op1=arr[i]+solve(i-2,arr,dp);
       int op2=solve(i-1,arr,dp);
       return dp[i]=max(op1,op2);
   }
   int FindMaxSum(int arr[], int n)
   {
       // Your code here
       vector<int>dp(n,-1);
       return solve(n-1,arr,dp);
   }
   //
   // another approach
    int FindMaxSum(int arr[], int n)
    {w
        // Your code here
        
       int ma1 = 0, ma2 = 0;
       for(int i=0;i<n;i++){
           if(i%2==0){
               ma1 += arr[i];
               ma1 = ma1 > ma2 ? ma1 : ma2;
           }
           else{
               ma2 += arr[i];
               ma2 = ma2 > ma1 ? ma2 : ma1;
           }
       }
      
        return max(ma1,ma2);
    }
	
	//stickler_thieft