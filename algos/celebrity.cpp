	// celebrity M-1
int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int in[n],out[n];
        memset(in,0,sizeof(in));
        memset(out,0,sizeof(out));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(M[i][j]){
                    out[i]++;
                    in[j]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(in[i]==n-1 && out[i]==0) return i;
        }
        return -1;
    }
	// celebrity M-2
	
    int celebrity(vector<vector<int> >& M, int n) 
       {
           // code here 
          // other approach would be using stack 
          stack<int> s;
          for(int i=0;i<n;i++) s.push(i);
          while(s.size() >=2){
              int a = s.top();
              s.pop();
              int b = s.top();
              s.pop();
              if(M[a][b] ==1){
                  s.push(b);
              }
              else s.push(a);
          }
          int a = s.top();
          bool flag = true;
          for(int i=0;i<n;i++){
              if(i!=a){ 
                  if (M[a][i]!=0 || M[i][a]!=1 ) {
                      flag = false;
                      break;
                  } 
              }
          }
          if(flag) return a;
          return -1;
       }
	