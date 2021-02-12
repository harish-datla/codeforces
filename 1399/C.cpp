#include<bits/stdc++.h>
using namespace std;

int get_num(vector<int> x , int sum){
  sort(x.begin(),x.end());
  int i = 0;
  int ans = 1;
  int j = x.size() - 1;
  // cout << sum << endl;
  // for(int p = 0 ; p < x.size() ; p++){
  //   cout << x[p] << " ";
  // }
 
  while(i < j){
    // cout << x[i] << " " << x[j] << " " << sum << endl;
    if((x[i] + x[j]) == sum){
      ans++;
      
      i++;
      j--;
    }
    else if((x[i] + x[j]) < sum){
      i++;
    }
    else if((x[i]+x[j]) > sum){
      j--;
    }
    
  }
  //  cout << ans << endl;
  return ans;
}

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
int ans = 0; 
for(int i = 0 ; i < n ; i++){
  for(int j = i + 1 ; j < n ; j++){
    int sum = a[i]+a[j];
    vector<int> x;
    
    for(int p = 0 ; p < n ; p++){
      if(p !=  i && p != j){
        x.push_back(a[p]);
      }
    }
    ans = max(ans,get_num(x,sum));
  }
}
cout << ans << endl;

}

}
