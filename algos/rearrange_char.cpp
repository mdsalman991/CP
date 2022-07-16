#include<bits/stdc++.h>
using namespace std;

int rearrangechar(string s){
	int n = s.length();
	priority_queue< pair<int,char> > pq; // max heap by freq of chars
	int ct[26]={0};
	for(int i=0;i<n;i++){
		 ct[int(s[i]) - 97]++;
	}
	for(int i=0;i<26;i++){
	    if(ct[i]) pq.push(make_pair( ct[i],char(i+97)) );
	}
	string e = "";

	pair<int,char> prev = make_pair(-1,'$');
	while(!pq.empty()){
		
		auto k = pq.top();
		pq.pop();
		e += k.second;
		if(prev.first >0){
			pq.push(prev);
		}
		k.first--;
		prev = k;
	}
	 if (n != e.length()) return 0;
     return 1;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		// string input
		string s;
		cin >> s;
		cout << rearrangechar(s) <<endl;
	}
	return 0;
}