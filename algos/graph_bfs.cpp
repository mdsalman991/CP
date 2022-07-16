 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        int visited[V];
        memset(visited,0,sizeof(visited));
        queue<int> q;
        q.push(0);
        visited[0] = 1;
        while(!q.empty()){
            int td = q.front();
            q.pop();
            ans.push_back(td);
            for(auto x: adj[td]){
                if(!visited[x]){
                    visited[x] = 1;
                    q.push(x);
                }
            }
        }
        return ans;
    }
	// bfs of graph