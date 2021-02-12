#include<bits/stdc++.h>
using namespace std;
 
 
vector<int> w;
vector<int> cnt;
vector<int> coins;
vector<vector<pair<int,int>>> g;
vector<bool> vis;
  int n;
map<pair<int,int>,int> mp;
int dfs(int v){
  vis[v] = true;
  int x = 0;
  for(auto it : g[v]){
    if(!vis[it.first]){
      if(g[it.first].size() == 1){
        cnt[it.second] = 1;
        x+=1;
      }
      else
      {
      int p = dfs(it.first);
      cnt[it.second] = p;
      x+=p;
      }
 
    }
  }
  return x;
}
 
vector<long long> gotCha(int p){
  vector<long long> ans;
  set<pair<long long,int>> s;
  long long sum = 0;
  for(int i = 0 ; i < n - 1; i++){
    if(coins[i] == p){
      s.insert({cnt[i]*1ll *w[i] - cnt[i]*1ll *(w[i]/2)  , i});
      sum+=(cnt[i]*1ll *w[i]);
    }
  }
    ans.push_back(sum);
    while(sum > 0 && !s.empty()){
      int idx = s.rbegin()->second;
      s.erase(prev(s.end()));
      sum = sum -( cnt[idx]*1ll *w[idx] - cnt[idx]*1ll *(w[idx]/2));
      ans.push_back(sum);
      w[idx]/=2;
      s.insert({cnt[idx]*1ll *w[idx] - cnt[idx]*1ll *(w[idx]/2),idx});
      
 
    }

return ans;    
}

int main(){
  int t;
  cin >> t;
  while(t--){
  
    cin >> n;
    long long S;
    cin >> S;
    w = cnt = coins = vector<int>(n-1);
    g = vector<vector<pair<int,int>>>(n);
    
    vis = vector<bool>(n,false);
    for(int i = 0 ; i < n - 1 ; i++){
      int x ,y;
      cin >> x >> y >> w[i] >> coins[i];
      g[x-1].push_back({y-1,i});
      g[y-1].push_back({x-1,i});
     
    }
    dfs(0);
    set<pair<long long,int>> s;
    long long sum = 0;


    vector<long long> one = gotCha(1);
    vector<long long> two = gotCha(2);
    int ans = INT_MAX;
    int j = two.size() - 1;
    for(int i = 0 ; i < one.size() ; i++){
      
      while(j > 0 &&one[i] + two[j-1] <= S){
        j--;
      }
      if(one[i] + two[j] <= S){
        ans = min(ans, i + 2*j);
      }
    }
    cout << ans << endl;
  }
}