 int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int> s;
      for(int i=0;i<N;i++){
          s.insert(arr[i]);
      }
      int streak = 0;
      for(int i=0;i<N;i++){
          if(s.find(arr[i]-1)==s.end()){
              int c = 1;
              while(s.find(arr[i]+1)!=s.end()){
                  c++;
                  arr[i] = arr[i] + 1;
              }
              streak = max(streak,c);
          }
      }
      return streak;
    }
	// longest sub sequence