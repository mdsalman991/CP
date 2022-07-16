vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        vector<long long int> ans;
        vector<long long int> lst;
        int i = 0, j = 0;
        while(j < N){
            if(A[j] < 0 ){
                lst.push_back(A[j]);
            }
            if(j-i+1 < K) j++;
            else if(j-i+1 == K){
                if(lst.size()==0) ans.push_back(0);
                else {
                    ans.push_back(lst.front());
                    if(A[i] == lst.front())    lst.erase(lst.begin());
                }
                i++;
                j++;
            }
        }
        return ans;
 }
 
 // print first negative integar in window of size k