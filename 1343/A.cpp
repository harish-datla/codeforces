#include<bits/stdc++.h>
using namespace std;
// int ans ;



int main(){
	int t;
	cin >> t;
    vector<int> a(34,0);
    for(int i = 2; i < 34 ; i++){
        a[i] = pow(2,i)-1;
    }
	while(t--){
		int n;
        cin >> n;
        for(int i = 2 ; i < 34 ; i++){
            if(n%a[i] == 0){
                cout << n/a[i] << endl;
                break;
            }
        }
    }
 
}