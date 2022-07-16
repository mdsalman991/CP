 int Kadanes(int arr[], int n){
        // Your code here
          int ma = INT_MIN;
          int max_th = 0;
        for(int i=0;i<n;i++){
            max_th = (max_th+arr[i]) ;
            if(max_th > ma) ma = max_th;
            if(max_th <0) max_th =0;
        }
        return ma;
    }