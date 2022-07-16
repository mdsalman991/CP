vector<int> Solution::subUnsort(vector<int> &A) {
  // return start and the end
  int n = A.size();
  vector<int> ans;
  int start = 0, end = n-1;
  for( start=0;start<n-1;start++){
   // start index .. 
  	 if(A[start] > A[start+1]){
		break;
	 }
  }
  if(start == n-1){
  	ans.push_back(-1);
	return ans;
  }

  for(end = n-1;end>0;end--){
   // end index ..
   		if(A[end] < A[end-1]){
			break;
   		}
  }
  int ma = A[start], mi = A[start];
  for(int i = start+1; i<=end;i++){
	  ma = max(ma,A[i]);
	  mi = min(mi,A[i]);
  }
  for(int i=0;i<start;i++){
	  if(A[i] > mi ){
		  start = i;
		  break;
	  }
  }
  for(int i=n-1;i>e;i--){
	  if(A[i] < ma){
		  end = i;
		  break;
	  }
  }
  v.push_back(start);
  v.push_back(end);
  return v;
}