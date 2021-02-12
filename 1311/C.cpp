#include<bits/stdc++.h>
using namespace std;


int main(){

	int t;
    cin >> t;
	while(t--){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n+1,vector<int>(26,0));
	string s;
	cin >> s;
	vector<int> p(m,0);
	for(int i = 0 ; i < m ; i++){
		cin >> p[i];
	}
	vector<int> count(26,0);
	for(int i = 0 ; i < s.size() ; i++){
		count[s[i] - 'a']++;
		vector<int> temp = count;
		a[i+1] = temp;
	}
	vector<int> out(26,0);
	// for(int i = 1 ; i < n+1 ; i++){
	// 	for(int j = 0 ; j < 26 ; j++){
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < 26 ; j++){
            // cout << a[p[i]][j] << " ";
		    out[j]+=a[p[i]][j];
		}
        // cout << endl;
	}
        
    for(int j = 0 ; j < 26 ; j++){
        out[j]+=a[n][j];
    }
	for(int j = 0 ; j < 26 ; j++){
		cout << out[j] << " ";
	}
	cout << endl;
    // cout << "new" << endl ;

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

