  vector<int> factorial(int N){
        // code here
        vector<int> res;
        res.push_back(1);
        for(int x=2;x<=N;x++){
            int c = 0;
            for(int i=0;i<res.size();i++){
                int val = res[i]*x+c;
                res[i] = val%10;
                c = val/10;
            }
            while(c!=0){
                res.push_back(c%10);
                c = c/10;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }