#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int i;
      cin >> i;
      stack<char> s;
      int p = 0;
      int ans = 0;
      while(p < i){
          char x;
          cin >> x;

          if(s.size() &&x == ')' ){
              ans+=2;
              s.pop();
          }
          else if(x == '('){
              s.push(x);
          }
          p++;
      }
      cout << (i - ans)/2 << endl;
   }
}