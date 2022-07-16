class Solution {
public:
    void dfs(int src, vector<int> g[],vector<int> &vis){
        vis[src] = 1 ;
        for(auto x : g[src]){
            if(!vis[x]){
                dfs(x,g,vis);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int m = connections.size();
        if( m < n-1) return -1;
        vector<int> g[n]; // graph 
        for(int i=0;i<m;i++){
            g[connections[i][0]].push_back(connections[i][1]);
            g[connections[i][1]].push_back(connections[i][0]);
        }
        vector<int> vis(n,0);
        int c = 0; // find the number of components the graph has.
        for(int i=0;i<n;i++){
            if(!vis[i]){
                c++;
                dfs(i,g,vis);
            }
        }
        return c-1;
    }
};

// find the number of components the graph has