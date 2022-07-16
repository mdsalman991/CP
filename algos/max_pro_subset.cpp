 long long int findMaxProduct(vector<int>&a, int n){
        //Write your code here  
        int mod = 1000000007;
        long long int ans = 1 ;
        int c = 0,z=0;
        int n_lrt = INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i] < 0) {
                c++;
                if(a[i] > n_lrt) n_lrt = a[i];
            }
            else if(a[i] == 0) {
                z++;
                continue;
            }
            ans = (ans*a[i])%mod;
        }
      if(z==n) return 0;
      else if(c==1 and z!=0 and z+c==n) return 0;
      else if(c==1 and z==0 and c==n) return n_lrt; 
      else if(c&1){
          ans = ans/n_lrt;
      }
      return ans;
    }
	// max product subset