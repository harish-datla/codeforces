#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin >> t;
  while(t--){
    int x,y,z;
    cin >> x >> y >> z;

    if(x != y && y != z && z != x){
      cout << "NO" << endl;
      continue;
    }

    if(y == z && x > y){
      cout << "NO" << endl;
      continue;
    }

    if(x == z && y > x){
      cout << "NO" << endl;
      continue;
    }

    if(y == x && z > y){
      cout << "NO" << endl;
      continue;
    }

    cout << "YES" << endl;
    if(y == x){
      cout << y << " " << z << " " << z << endl; 
      continue;
    }


    if(y == z){
      cout << y << " " << x << " " << x << endl;
      continue; 
    }


    if(z == x){
      cout << x << " " << y << " " << y << endl;
      continue; 
    }

  }
}