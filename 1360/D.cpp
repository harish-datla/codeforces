#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
     int n,k;
     cin >> n >> k;
     if(n <= k){
         cout << 1 << endl;
         continue;
     }
     bool flag = false;
     int ans = n;
     for(int i = 2 ; i <= ceil(sqrt(n)); i++){
         if(n%i == 0){
         if(i <= k && n/i <= k){
             ans = min(ans,min(i,n/i));
         }
         else if(i <= k && n/i > k){
             ans = min(ans,n/i);
         }
         else if(i > k && n/i <= k){
             ans = min(ans,i);
         }
         } 
     }

     cout << ans<< endl;
     

    // cout << ans << endl;
    }
}