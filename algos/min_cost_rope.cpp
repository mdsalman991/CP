#include<bits/stdc++.h>
using namespace std;

   long long minCost(long long arr[], long long n) {
           // Your code here
           long long int ans = 0;
   		priority_queue<long long int, vector<long long int>, greater<long long int> > pq;
   		for(int i=0;i<n;i++){
   			pq.push(arr[i]);
   		}
   		while(pq.size() > 1){
   			long long int a = pq.top();
   			pq.pop();
   			long long int b = pq.top();
   			pq.pop();
   			ans += a+b;
   			pq.push(a + b);
   		}
   		return ans;
       }
int main(){
		long long int n;
		cin >> n;
		long long int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];
		cout << minCost(arr,n);
		return 0;
}

// min cost ropes