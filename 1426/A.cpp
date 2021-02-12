#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int ans = 1;
        n = n - 2;
        while(n > 0){
            n -=x;
            ans+=1;
        }
        cout << ans << endl;
    }
}