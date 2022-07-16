vector<int> Solution::flip(string A) {
    int n = A.size();
    int cnt = 0 ;
    int max_count = INT_MIN;
    int l=1,r;
    int ltemp = 1;
    vector<int> ans;
    for(int i=0;i<n;i++) {
        if(A[i]=='0') cnt++;
    }
    if(cnt ==0 )return ans;
    cnt = 0;
    for(int i = 0; i<n; i++){
        if(A[i]=='0') cnt++;
        else cnt--;
        if(cnt > max_count) {
            max_count = cnt;
            l = ltemp;
            r = i+1;
        }
        if(cnt < 0){
            cnt = 0;
            ltemp = i+2;
        }
    }
    ans.push_back(l);
    ans.push_back(r);
    return ans;
}

// flip