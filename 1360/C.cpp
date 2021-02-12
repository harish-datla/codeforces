#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
     int n;
     cin >> n;
     vector<int> a(n,0);
     for(int i = 0 ; i < n ; i++){
         cin >> a[i];
     }
     sort(a.begin(),a.end());
     int odd = 0;
     int even = 0;
     for(int i = 0 ; i < a.size() ; i++){
      odd+=(a[i]%2);
      even+=(1 - (a[i]%2));   
     }
     //cout << odd << " " << even << endl;
     //if(odd != even){
     // cout << "NO" << endl;
     // continue;   
     //}
     if(odd%2 == 0 && even%2 == 0){
         cout << "YES" << endl;
         continue;
     }
     bool flag = false;
     for(int i = 0 ; i < a.size()-1 ; i++){
         if(a[i+1] - a[i] == 1){
             cout << "YES" << endl;
             flag = true;
             break;
         }
     }
     if(flag){
     	continue;
     }
     cout << "NO" << endl;
     

    // cout << ans << endl;
    }
}