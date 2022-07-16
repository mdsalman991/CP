int lps(string s) {
	    // Your code goes here
	int n = s.length();
    int lps[n];
    lps[0] = 0; 
    int len = 0;
    int i= 1; // i 1 to n-1
    while(i < n){
        if(s[i] == s[len]){
            // if second char equal to first char
            len++;
            lps[i] = len;
            i++;
        }
        else{
            // not equal
            if(len!=0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
    int res = len[n-1];
    return (res > n/2)? res/2 : res; // not overlapping part else above return is fine
    
	}
	// lps imp kmp algo