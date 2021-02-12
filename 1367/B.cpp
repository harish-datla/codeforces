#include<bits/stdc++.h>
using namespace std;

int main(){
int x;
cin >> x;
while(x--){
 int n;
 cin >> n;
 vector<int> a(n,0);
 for(int i = 0 ; i < n ; i++){
     cin >> a[i];
 }
 int ans = 0;
 bool megaflag = true;
 for(int i = 0  ; i < n ; i++){
     if(i%2 != a[i]%2)
     {
         bool flag = true;
         for(int j = i+1 ; j < n ; j++){
             if(j%2 != a[j]%2){
                 if(i%2 == a[j]%2 && j%2 == a[i]%2){
                  ans++;
                  swap(a[i],a[j]);
                  flag = false;
                  break;   
                 }
             }
         }
         if(flag){
             megaflag = false;
             cout << -1 << endl;
             break;
         }
     }
 }
  if(megaflag){
  cout << ans << endl;
  }
}

}