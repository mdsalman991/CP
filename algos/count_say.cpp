 string countAndSay(int n) {
        if (n==1) return "1";
        if(n==2) return "11";
        string s = "11"; // start from 2
        int cnt = 1; 
        for(int j=3;j<=n;j++){
            string t ="";
            for(int i=1;i<=s.size();i++){
                if(s[i]!=s[i-1]){
                    t += to_string(cnt);
                    t += s[i-1];
                    cnt = 1;
                }
                else cnt++;
            }
            s = t;
        }
        return s;
    }
	
// count & say