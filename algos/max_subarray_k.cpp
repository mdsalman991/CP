vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        
        vector<int> output;
        int i=0;
        int j=0;
        list<int> l;
        while(j<n)
        {
            while(!l.empty() && l.back()<arr[j]) l.pop_back();
            l.push_back(arr[j]);               
            if(j-i+1<k) j++;
            else if(j-i+1==k)
            {
                output.push_back(l.front());
                if(arr[i]==l.front())
                    l.pop_front();
                ++i;
                ++j;
            }
        }
        return output;
    }
	// max of subarray of size k