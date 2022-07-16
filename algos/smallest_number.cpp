#include<bits/stdc++.h>
using namespace std;
string smallestNumber(int S, int D){
        // code here 
		//	if() // base case
        string s = "";
		if(S > D*9) return "-1";
		else{
			// do opertaions and reverse the string and return
			while(S > 0){
				if(S > 9 or (S==9 and D==1)){
					s += "9";
					// smallestNumber(S-9,D-1); if recursive
					S = S - 9;
					D = D - 1;
				}
				else{
					// S range 1 - 9 ... 
// 					S = S - e;
// 					s += to_string(e);
// 					// smallestNumber();
// 					D = D - 1;
// 					for(int i=0;i<D-1;i++){
// 						s += "0";
// 					}
// 					s += "1";
					// check S and D you currently have
					// if S and D==1
					if(D==1){
						s += to_string(S);
						break;
					}
					else{
						int e  = S-1;
						s += to_string(e);
						D = D - 1;
						if(D > 1){
							for(int i=0;i<D-1;i++) s += "0";
							S = S - e;
							s += to_string(S);
						}
						else{
							S = S - e;
							s += to_string(S);
						}
						break;
					}
				}
		}
		reverse(s.begin(),s.end());	
	}
		return s;
    }
	
int main(){
	int s,d;
	cin >> s >> d;
	smallestNumber(s,d);
}