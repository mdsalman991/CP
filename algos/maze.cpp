vector<string> ans;
    void dfs(int i, int j,string s,vector<vector<int>> m ,int n, vector<vector<int>> &vis){
        if(i<0 or j<0 or i>=n or j>=n) return;
        if(m[i][j] ==0 or vis[i][j]==1) return;
        if(i==n-1 and j==n-1) {
            ans.push_back(s);
            return;
        }
        vis[i][j] = 1;
        dfs(i-1,j,s+'U',m,n,vis);
        dfs(i+1,j,s+'D',m,n,vis);
        dfs(i,j+1,s+'R',m,n,vis);
        dfs(i,j-1,s+'L',m,n,vis);
        vis[i][j] = 0;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        ans.clear();
        // Your code goes here
        vector<vector<int>> vis(n,vector<int>(n,0));
        if(m[0][0]==0) return ans;
        if(m[n-1][n-1]==0) return ans;
        string s = "";
        dfs(0,0,s,m,n,vis);
        sort(ans.begin(),ans.end());
        return ans;
    }
	