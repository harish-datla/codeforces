#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n,0);
        vector<int> b(n,0);
		// int maxi = INT_MIN;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			// maxi = max(maxi,a[i]);
		}
		for(int i = n - 1 ; i >= 0 ; i--){
			b[i] = a[n-1-i];
		}
		vector<vector<int>> c(n+1,vector<int>(n+1,0));
		for(int i = 0 ; i <= n ; i++){
			for(int j = 0 ; j <= n ; j++){
				if(i == 0 || j == 0){
					c[i][j] = 0;
				}
				else if(a[i-1]== b[j-1]){
					c[i][j] = c[i-1][j-1]+1;
				}
				else
				{
					c[i][j] = max(c[i-1][j],c[i][j-1]);
				}
			}
		}

		if(c[n][n] >= 3){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}

}