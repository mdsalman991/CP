    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        long long int sum=0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i] < 0 and k>0) {
                a[i] = -a[i];
                k--;
            }
        }
        for(int i=0;i<n;i++) sum += a[i];
        int x = *min_element(a,a+n);
        if(k&1) sum = sum - 2*x;
        
        return sum;
    }
	//max sum , good question