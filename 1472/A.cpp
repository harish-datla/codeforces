#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int w,h,n;
        cin >> w >> h >> n;
        int x = 1, y = 1;
        while(w%2 == 0){
            w/=2;
            x*=2;
        }
        while(h%2 == 0){
            h/=2;
            y*=2;
        }
       // cout << x <<" " << y << endl;
        if(x*y >= n){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}