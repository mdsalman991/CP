 int longestSubstring(string s, int k) {
        // variable size window
        map<char,int> mp;
        int ma = INT_MIN;
        int n = s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int j = 0;
    while(j<n && mp[s[j]]>=k) j++;
    if(j>=n-1) return j;
    int c1 = longestSubstring(s.substr(0,j),k);
    while(j<n && mp[s[j]]<k) j++;
    int c2 = longestSubstring(s.substr(j),k);
    return max(c1,c2);
    }
	
	