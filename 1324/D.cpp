#include<bits/stdc++.h>
using namespace std;


int main(){
	
		long long n;
		cin >> n;
		vector<long long> a(n,0);
        vector<long long> b(n,0);
		// long long maxi = long long_MIN;
		for(long long i = 0 ; i < n ; i++){
			cin >> a[i];
			// maxi = max(maxi,a[i]);
		}
		for(long long i = 0 ; i < n ; i++){
			cin >> b[i];
		}
		vector<long long> c;
		for(long long i = 0 ; i < n ; i++){
			c.push_back(a[i] - b[i]);
		}
		sort(c.begin(),c.end());
		long long ans = 0;
		for(long long j = n-1 ; j >= 0 ; j--){
			if(c[j] > 0){
				ans+=(j - (lower_bound(c.begin(),c.end(),1 - c[j]) - c.begin()));
			}
		}
		cout << ans << endl;

// c[j] + c[k] >= 1;
// c[k] > = 1 - c[j];

}