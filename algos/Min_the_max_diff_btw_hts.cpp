int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int ans = arr[n-1] - arr[0];
        int sma = arr[0] + k;
        int lar = arr[n-1] - k;
        int mi,ma;
        for(int i=0;i<n-1;i++){
            mi = min(sma,arr[i+1]-k);
            ma = max(lar,arr[i]+k);
            if(mi < 0 )continue;
            ans = min(ma-mi,ans);
        }
        return ans;
    }