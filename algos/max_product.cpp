	long long maxProduct(vector<int> arr,int n) {
	    // code here
	    long long int ma = arr[0];
	     long long int mi = arr[0];
	    long long int  ans = arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i]<0){
	            swap(ma,mi);
	        }
	        
	        ma = max((long long int)arr[i],ma*arr[i]);
	        mi = min((long long int)arr[i],mi*arr[i]);
	        ans = max(ans,ma);
	    }
	    return ans;
	}