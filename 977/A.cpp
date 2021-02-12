#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,c;
  cin >> n >> c;

  while(c--){
    if(n%10 != 0){
      n = n - 1;
    }
    else
    {
      n = n/10;
    }
  }

  cout << n << endl;
}