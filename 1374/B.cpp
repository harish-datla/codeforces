#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int i;
      cin >> i;
      int z = i;
      int x = 0,y = 0;
      if(i == 1){
      cout << 0 << endl;
      continue;
      }
      while(z%2 == 0){
          z = z/2;
          x++;
      }

      while(z%3 == 0){
          z = z/3;
          y++;
      }
      if(x > y || z != 1){
          cout << -1 << endl;
          continue;
      }
      cout << y + y - x << endl;
   }
}