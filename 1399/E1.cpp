#include<bits/stdc++.h>
using namespace std;


vector<int> w;
vector<int> cnt;
vector<vector<pair<int,int>>> g;
vector<bool> vis;
map<pair<int,int>,int> mp;
int dfs(int v){
  vis[v] = true;
  int x = 0;
  for(auto it : g[v]){
    if(!vis[it.first]){
      if(g[it.first].size() == 1){
        // vector<int> z = {it.first,v};
        // sort(z.begin(),z.end());
        cnt[it.second] = 1;
        x+=1;
      }
      else
      {
      int p = dfs(it.first);
      // vector<int> z = {it.first,v};
      // sort(z.begin(),z.end());
      cnt[it.second] = p;
      x+=p;
      }

    }
  }
  return x;
}


int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    long long S;
    cin >> S;
    w = cnt = vector<int>(n-1);
    g = vector<vector<pair<int,int>>>(n);
    
    vis = vector<bool>(n,false);
    for(int i = 0 ; i < n - 1 ; i++){
      int x ,y;
      cin >> x >> y >> w[i];
      g[x-1].push_back({y-1,i});
      g[y-1].push_back({x-1,i});
      // vector<int> z = {x-1,y-1};
      // sort(z.begin(),z.end());
      // mp[{z[0],z[1]}] = i;
    }
    // cout << "dfs1" << endl;
    dfs(0);
    // cout << "dfs2" << endl;
    set<pair<long long,int>> s;
    long long sum = 0;
    // for(int i = 0 ; i < n -1 ; i++){
    //   cout << cnt[i] << endl;
    // }
    for(int i = 0 ; i < n - 1; i++){
      s.insert({cnt[i]*1ll *w[i] - cnt[i]*1ll *(w[i]/2)  , i});
      sum+=(cnt[i]*1ll *w[i]);
    }
    int ans = 0;
    while(sum > S){
      int idx = s.rbegin()->second;
      s.erase(prev(s.end()));
      sum = sum -( cnt[idx]*1ll *w[idx] - cnt[idx]*1ll *(w[idx]/2));
      // cout << sum << endl;
      w[idx]/=2;
      s.insert({cnt[idx]*1ll *w[idx] - cnt[idx]*1ll *(w[idx]/2),idx});
      ans++;

    }
    cout << ans << endl;
  }
}

// #include <bits/stdc++.h>

// using namespace std;

// vector<int> w, cnt;
// vector<vector<pair<int, int>>> g;

// long long getdiff(int i) {
// 	return w[i] * 1ll * cnt[i] - (w[i] / 2) * 1ll * cnt[i];
// }

// void dfs(int v, int p = -1) {
// 	if (g[v].size() == 1) cnt[p] = 1;
// 	for (auto [to, id] : g[v]) {
// 		if (id == p) continue;
// 		dfs(to, id);
// 		if (p != -1) cnt[p] += cnt[id];
// 	}
// }

// int main() {

	
// 	int t;
// 	cin >> t;
// 	while (t--) {
// 		int n;
// 		long long s;
// 		cin >> n >> s;
// 		w = cnt = vector<int>(n - 1);
// 		g = vector<vector<pair<int, int>>>(n);
// 		for (int i = 0; i < n - 1; ++i) {
// 			int x, y;
// 			cin >> x >> y >> w[i];
// 			--x, --y;
// 			g[x].push_back({y, i});
// 			g[y].push_back({x, i});
// 		}
// 		dfs(0);
// 		set<pair<long long, int>> st;
// 		long long cur = 0;
// 		for (int i = 0; i < n - 1; ++i) {
// 			st.insert({getdiff(i), i});
// 			cur += w[i] * 1ll * cnt[i];
// 		}
// 		cerr << cur << endl;
// 		int ans = 0;
// 		while (cur > s) {
// 			int id = st.rbegin()->second;
// 			st.erase(prev(st.end()));
// 			cur -= getdiff(id);
//       cout << cur << endl;
// 			w[id] /= 2;
// 			st.insert({getdiff(id), id});
// 			++ans;
// 		}
// 		cout << ans << endl;
// 	}
	
// 	return 0;
// }