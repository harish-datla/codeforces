#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
	int n;
    cin >> n;
	vector<vector<int>> a(2*n+1,vector<int>(2*n+1,0));
    vector<pair<int,pair<int,int>>> p;
	map<int,int> mp;
	for(int i = 2 ; i <= 2*n ; i++){
		for(int j = 1 ; j < i ; j++){
			int x;
			cin >> x;
			p.push_back({x,{i,j}});
		}
	}
	sort(p.rbegin(),p.rend());
	for(int i = 0 ; i < (n)*(2*n - 1) ; i++){
        // cout << mp[p[i].second.first] << " " << mp[p[i].second.second] << endl;
		if(!mp[p[i].second.first] && !mp[p[i].second.second]){
            mp[p[i].second.first] = p[i].second.second; 
			mp[p[i].second.second] = p[i].second.first; 
		}
	}
 
	for(int i = 1 ; i <= 2*n ; i++){
		cout << mp[i] << " ";
	}
	
 
 
}
 
// 6
// 1 2
// 3 4 5
 
// 6(1,2)
// 1(1,3)
// 2(2,3)
// 3(1,4)
// 4(2,4)
// 5(3,4)
