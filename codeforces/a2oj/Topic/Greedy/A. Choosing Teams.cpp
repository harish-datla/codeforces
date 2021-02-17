#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        int x ;
        cin >> x;
        if( 5-x >= k){
            ans++;
        }
    }
    cout << ans/3 << endl;
}