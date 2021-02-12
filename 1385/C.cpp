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
   if(n ==1 || n== 2){
     cout << 0 << endl;
     continue;
   }
   bool flag = false;
   int ans = 0;
   int pos = n-1;
   while(pos > 0 && a[pos-1]>=a[pos])pos--;
   while(pos > 0 && a[pos-1]<=a[pos])pos--;

   cout << pos << endl;

  }
}