  static bool comp(pair<int,int>a, pair<int,int>b){
        return a.first > b.first;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(arr[i].profit,arr[i].dead));
        }
        sort(v.begin(),v.end(),comp);
        int slot[n];
        int maxP = 0;
        int c =0;
        vector<int> ans;
        memset(slot,0,sizeof(slot));
       
        for(auto x :v){
            for(int i=min(n,x.second-1);i>=0;i--){
                if(!slot[i]){
                   c++;
                 maxP = maxP + x.first;
                 slot[i] = 1;  
                 break;
                }
            }
        }
        ans.push_back(c);
        ans.push_back(maxP);
        return ans;
    }
	// job sequencing