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
     int ans = INT_MAX;
     for(int i = 0 ; i < a.size() - 1 ; i++){
         ans = min(ans,a[i+1] - a[i]);
     }

    cout << ans << endl;
    }
}