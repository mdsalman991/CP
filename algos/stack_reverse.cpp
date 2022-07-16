void insert_at_bottom(stack<int>& s,int a){
        if(s.size()==0) s.push(a);
        else{
            int e = s.top();
            s.pop();
            insert_at_bottom(s,a);
            s.push(e);
        }
    }
    void rt(stack<int> &s){
        if(s.size() > 0){
            int a = s.top();
            s.pop();
            rt(s);
            insert_at_bottom(s,a);
        }
    }
    vector<int> Reverse(stack<int> St){
        vector<int> ans;
        rt(St);
        while(!St.empty()){
            ans.push_back(St.top());
            St.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
	// reverse stack using recursion