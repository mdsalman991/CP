 bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        // window size of k+1
        int i=0,j=0;
        map<int,int> mp;
        while(j<n){
            mp[nums[j]]++;
            
            if(mp[nums[j]] > 1) return true;
            
            if(j-i < k ){
                j++;
            }
            else if( j-i+1 == k+1){
                // remove cal for i
                mp[nums[i]]--;
                i++;
                j++;
            }
        }
        return false;
    }
	