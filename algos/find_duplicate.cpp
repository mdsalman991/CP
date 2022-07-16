 int findDuplicate(vector<int>& nums) {
       // use the same array
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])] < 0 ){
                return abs(nums[i]);
                break;
            }
            else{
                nums[abs(nums[i])] = -(nums[abs(nums[i])]);
            }
        }
        return 0;
    }
	// find duplicate in O(1) space. neet code approach
	