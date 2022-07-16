 int longestKSubstr(string s, int k) {
    // your code here
    int n = s.length();
    int i = 0, j=0;
    int ma = 0;
    unordered_map<char,int> mp;
    while(j<n){
        mp[s[j]]++;
        if(mp.size() < k ){
            // we have less char we can go for more
            j++;
        }
        else if(mp.size() == k){
            // if it hits the limit
            ma = max(ma,j-i+1);
            j++;
        }
        else{
            // increased in char in window
            // while cond ==k remove the characters
            while(mp.size() > k){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
            j++;
        }
    }
    if(ma==0) return -1;
    return ma;
    }
	// Longest K unique characters substring  