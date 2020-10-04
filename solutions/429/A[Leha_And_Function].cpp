#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
 
	int n;
	cin >> n;
	vector<int> a(n,0);
	vector<int> b(n,0);
	vector<pair<int,int>> c;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	
	for(int i = 0 ; i < n ; i++){
		cin >> b[i];
		c.push_back({b[i],i});
	}
	sort(a.rbegin(),a.rend());
	sort(c.begin(),c.end());
 
	for(int i = 0 ; i < n ; i++){
		b[c[i].second] = a[i];
	}
	for(int i = 0 ; i < n ; i++){
		cout << b[i] << " ";
	}
 
	
	
}