vector<vector<int> > Solution::solve(int A) {
        vector<vector<int>> ans;
        vector<int> v;
        v.push_back(1);
        if(A==0) return ans;
        ans.push_back(v);
        if(A==1) return ans;
        vector<int> vt;
        for(int k=1;k<=A-1;k++){
            vt.push_back(1);
            for(int i=0;i<v.size()-1;i++){
                vt.push_back((v[i]+v[i+1]));
            }
            vt.push_back(1);
            ans.push_back(vt);
            v = vt;
            vt.clear();
        }
        
        return ans;
}
// pascals triangle