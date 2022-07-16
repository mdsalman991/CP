	int search(string pat, string txt) {
	    // code here
	    unordered_map<char,int >mp;
        for(int i=0;i<pat.size();i++) mp[pat[i]]++;
	    int i = 0, j=0;
	    int k = pat.size();
	    int cnt = mp.size();
	    int ans = 0;
	    string s;
	    while(j<txt.length()){
	       if(mp.find(txt[j])!=mp.end()){
	           mp[txt[j]]--;
	           if(mp[txt[j]]==0) cnt--;
	       }
	       if(j-i+1 <k) j++;
	       else if(j-i+1 ==k){
	           if(cnt==0) ans++;
	           if(mp.find(txt[i]) != mp.end()){
                mp[txt[i]]++;
                if(mp[txt[i]] == 1) cnt++; 
            }
            j++;
            i++;
	       }
	    }
	    return ans;
	}
