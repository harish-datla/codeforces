#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> ans;
    vector<int> zero,one;
    vector<char> a(n,0);
    for(int i = 0 ; i < n ; i++){
      cin >> a[i];
    }
    int maxi = 1;
    for(int i = 0 ; i < n ; i++){
      if(a[i] == '0'){
        if(one.empty()){
          zero.push_back(maxi);
          ans.push_back(maxi);
          maxi+=1;
        }
        else
        {
          zero.push_back(one[one.size() - 1]);
          ans.push_back(one[one.size() - 1]);
          one.pop_back();
        }
      }
      if(a[i] == '1'){
        if(zero.empty()){
          one.push_back(maxi);
          ans.push_back(maxi);
          maxi+=1;
        }
        else
        {
          one.push_back(zero[zero.size() - 1]);
          ans.push_back(zero[zero.size() - 1]);
          zero.pop_back();
        }
      }
    }
    cout << maxi-1 << endl;
    for(int i = 0 ; i < ans.size() ; i++){
      cout << ans[i] << " " ;
    }
    cout << endl;

  }
}