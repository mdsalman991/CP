#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y,q;
		cin >> x >> y >> q;
		vector<int> a,b;
		a.push_back(0);
		b.push_back(0);
		while(q--){
		 int posx,posy;
		 cin >> posx >> posy;
		 a.push_back(posx);
		 b.push_back(posy);
		}
		a.push_back(x+1);
		b.push_back(y+1);
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		int mx = 0, my = 0;
		for(int i=0;i<a.size()-1;i++){
				mx = max(mx,a[i+1] - a[i]-1); 
				my = max(my,b[i+1] - b[i]-1);
		}
		cout << mx*my<<endl;
	}
	
	return 0;
}