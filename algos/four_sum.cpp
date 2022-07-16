vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int n = arr.size();
        vector<vector<int> > ans;
        sort(arr.begin(),arr.end());
        // two pointers i and j
        for(int i=0;i<n-3;i++){
            if(i==0  or arr[i]!=arr[i-1]){ 
                    for(int j=i+1;j<n-2;j++){
                        if(j==i+1 or arr[j]!=arr[j-1]){
                    // left and right 2 sum in sorted array
                    int temp = k - arr[i] - arr[j];
                    // this temp sum in the next array space
                    int left = j+1; int right = n-1;
                    while(left < right){
                        int two_sum = arr[left] + arr[right];
                        if(two_sum < temp) left++;
                        else if(two_sum > temp) right--;
                        else{
                            vector<int> temp_ans;
                            temp_ans.push_back(arr[i]);
                            temp_ans.push_back(arr[j]);
                            temp_ans.push_back(arr[left]);
                            temp_ans.push_back(arr[right]);
                            ans.push_back(temp_ans);
                            left++; right--;
                            while(left < right and temp_ans[2] == arr[left]) left++;
                            while(left < right and temp_ans[3] == arr[right]) right--;
                        
                        }
                    
                    }
                }
                        
            }
        }
    }
        return ans;
    }
	
	// four sum
	