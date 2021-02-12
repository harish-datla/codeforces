#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n,0);
		int maxi = INT_MIN;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			maxi = max(maxi,a[i]);
		}
		bool flag = true;
		for(int i = 0 ; i < n ; i++){
			if((maxi - a[i])%2){
				cout << "NO" << endl;
				flag = false;
				break;
			}
		}
		if(flag){
			cout << "YES" << endl;
		}

	}

}