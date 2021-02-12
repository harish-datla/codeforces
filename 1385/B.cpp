#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<bool> a(n,false);
    for(int i = 0 ; i < 2*n ; i++){
      int x;
      cin >> x;
      if(!a[x]){
        cout << x << " ";
        a[x] = true;
      }
    }
    cout << endl;

  }
}