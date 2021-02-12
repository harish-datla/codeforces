#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> a(n,0);
    vector<int> b(n,0);
    int mini_a = INT_MAX;
    int mini_b = INT_MAX;

    for(int i = 0 ; i < n ; i++){
      cin >> a[i];
      mini_a = min(a[i],mini_a);
    }
    for(int i = 0 ; i < n ; i++){
      cin >> b[i];
      mini_b = min(b[i],mini_b);
    }
    long long ans_a = 0;
    long long ans_b = 0;
    for(int i = 0 ; i < n ; i++){
      ans_a+=(max(a[i] - mini_a,b[i] - mini_b));
    }
    

    cout << max(ans_a,ans_b) << endl;
}

}