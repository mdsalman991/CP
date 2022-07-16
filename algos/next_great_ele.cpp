 if(s.empty()){
                res.push_back(-1);
                s.push(arr[i]);
            }
            else{
                if(s.top() > arr[i]){
                    res.push_back(s.top());
                    s.push(arr[i]);
                }
                else{
                    while(s.top() < arr[i] && !s.empty()){
                        s.pop();
                    }
                    if(s.empty()){
                        res.push_back(-1);
                        s.push(arr[i]);
                    }
                    else{
                        res.push_back(s.top());
                        s.push(arr[i]);
                    }
                }
            }