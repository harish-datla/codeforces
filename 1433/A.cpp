#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << ((n%10)-1)*10 +  (n/1000 > 0)*4 + (n/100 > 0)*3 + (n/10 > 0)*2 + 1 << endl ;
    }
}