 void dfs(int i, int j, int n , int m , vector<vector<int>>& vis, vector<vector<char>> &grid){
        if(i<0 or j<0 or i>=n or j>=m) return;
        if(grid[i][j]=='0') return;
        if(!vis[i][j]){
            vis[i][j] = 1;
        dfs(i-1,j-1,n,m,vis,grid);
        dfs(i,j-1,n,m,vis,grid);
        dfs(i+1,j-1,n,m,vis,grid);
        dfs(i-1,j,n,m,vis,grid); 
        dfs(i+1,j,n,m,vis,grid);
        dfs(i-1,j+1,n,m,vis,grid);
        dfs(i,j+1,n,m,vis,grid);
        dfs(i+1,j+1,n,m,vis,grid);    
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int c =0;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (grid[i][j]=='1' and !vis[i][j]){
                    dfs(i,j,n,m,vis,grid);
                    c++;

                }
            }
        }
        return c;
    }
	// no of islands