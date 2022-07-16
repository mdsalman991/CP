	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    // four sum appraoch
	    long long int cnt = 0;
	    sort(arr,arr+n);
	    for(int i=0;i<n-2;i++){
	       int start = i+1;
	       int end = n-1;
	       while(start < end){
	           long long check = arr[i] + arr[start] + arr[end];
	           if(check >= sum){
	               end--;
	           }
	           else if( check < sum){
	               cnt += end -s tart; // most imp. logic breaker
 	               start++;
	           }
	       }
	    }
	    return cnt;
	}
	
	// counttriplets