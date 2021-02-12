#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
     int a,b;
     cin >> a >> b;
     int x = min(a,b);
     int y = max(a,b);
     if(y <= 2*x){
      cout << 4*x*x << endl;   
     }
     else
     {
         cout << y*y << endl;
     }

    }
}