#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		if(n == 1){
			cout << 0 << endl;
			continue;
		}
		if(n == 2){
			cout << m << endl;
			continue;
		}
		if( n >= 3){
			cout << 2*m << endl;
		}
 
	}
 
}