#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<vector<int>> a(26,vector<int>(26,0));

  for(int i = 1 ; i < n ; i++){
    a[s[i-1] - 'A'][s[i] - 'A']+=1;
  }

  int maximum = INT_MIN;
  string ans;
  for(int i = 0 ; i < 26 ; i++){
    for(int j = 0 ; j < 26 ; j++){
      if(a[i][j] > maximum){
        maximum = a[i][j];
        ans = "";
        ans+=(i+'A');
        ans+=(j+'A'); 
      }
    }
  }

  cout << ans << endl;
  // cout << maximum << endl;
  // cout << a[25][25] << endl;
}