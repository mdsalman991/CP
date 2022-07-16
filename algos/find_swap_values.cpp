int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        // 1 or -1
        int a = 0, b = 0;
        for(int i=0;i<n;i++) a += A[i];
        for(int i=0;i<m;i++) b += B[i];
        int i=0,j=0;
        sort(A,A+n);
        sort(B,B+m);
        while(i < n && j<m){
            int val1 = a - A[i] + B[j];
            int val2 = b - B[j] + A[i];
            if(val1 == val2) return 1;
            if(val1 > val2) i++;
            else j++;
        }
        return -1;
	}
 
 // find swap values
	// https://practice.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal4142/1/?page=1&curated[]=1&sortBy=submissions#
	