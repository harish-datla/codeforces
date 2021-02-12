#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,a,b;
        cin >> n >> m >> a >> b;
        if(a*n != m*b){
            cout << "NO" << endl;
            continue;
        }

        vector<vector<int>> x(n,vector<int>(m,0));
		int k = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < a ; j++){
                x[i][(j+k)%m] = 1;
            }
            k+=a;
        }

        cout << "YES" << endl;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cout << x[i][j];
            }
            cout << endl;
        }
    }
}