 static bool comp(pair<int,int> a, pair<int,int> b){
        if(a.second==b.second) return a.first < b.first;
        return a.second < b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(start[i],end[i]));
        }
        sort(v.begin(),v.end(),comp);
        int i=0,j=1,c=1;
        while(j<n){
            if(v[i].second < v[j].first){
                c++;
                i = j; // imp intuition to rem
                j++;
            }
            else j++;
        }
        return c;
    }
	// n meeting in room 