#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;

	vector<vector<int>> a(2005,vector<int>(2005,0));
	vector<pair<int,int>> vv;
	for(int i = 0 ; i < n ; i++){
		int x,y;
		cin >> x >> y;
		vv.push_back({x,y});
		a[x+1000][y+1000] = 1;
	}
	int ans = 0;
	for(int i = 0 ; i < vv.size() ; i++){
		for(int j = i+1 ; j < vv.size() ; j++){
			if((vv[i].first+1000 + vv[j].first+1000)%2 == 0 && (vv[i].second +1000 + 1000 + vv[j].second)%2 == 0 ){
			if(a[(vv[i].first+1000 + vv[j].first+1000)/2][(vv[i].second +1000 + 1000 + vv[j].second)/2]){
				ans++;	
			}
			}
		}
	}

	cout << ans << endl;


}