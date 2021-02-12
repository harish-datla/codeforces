#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		vector<string> a(9);
        for(int i = 0 ; i < 9 ; i++){
                cin >> a[i];
        }
        a[0][0] = a[0][1];
        a[1][3] = a[1][4];
        a[2][6] = a[2][7];
        a[3][1] = a[3][2];
        a[4][4] = a[4][5];
        a[5][7] = a[5][8];
        a[6][2] = a[6][1];
        a[7][5] = a[7][4];
        a[8][8] = a[8][7];
        for(int i = 0 ; i < 9 ; i++){
           cout << a[i] << endl;
        }
        
        
	}
	return 0;
	
}