#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin >>t;
	while(true){
		int arr[t];
		for(int i=0;i<t;i++) cin >> arr[i];
		// appraoch
		vector<pair<int,int>> buy,sell;
		for(int i=0;i<t;i++){
			if(arr[i] > 0){
				buy.push_back(make_pair(arr[i],i));
			}
			else if(arr[i] < 0) sell.push_back(make_pair(arr[i],i));
		}
		// now as i have two vectors with buy and sell requirments and the index
		int i=0,j=0;
		long long int ans  = 0;
		while(i<buy.size() && j<sell.size()){
			if(buy[i].first==0){
				i++;
                continue;
			}
			if(sell[j].first ==0){
				j++;
                continue;
			}
			int e = min(buy[i].first,abs(sell[j].first));
			buy[i].first = buy[i].first - e;
			sell[j].first = sell[j].first + e;
            int diff = abs(buy[i].second-sell[j].second);
			ans += (long long int)e*(diff);
            
		}
		cout << ans << endl;
        cin >> t;
        if(t==0) break;
	}
	return 0;
}