#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> a(n,0);
  for(int i = 0 ; i < n ; i++){
    cin >> a[i];
  }

  sort(a.begin(),a.end());
  if(k == 0 && a[0] > 1){
    cout <<  a[0] - 1 << endl;
    return 0;
  }

  if(k ==0 && a[0] <= 1){
    cout <<-1 <<endl;
    return 0;
  }
 
  if(a[k-1] > 1e9){
    cout << -1 << endl;
    return 0;
  }

  if(a[k] == a[k-1]){
    cout << -1 << endl;
  }
  else
  {
    cout << a[k-1] << endl;
  }

}