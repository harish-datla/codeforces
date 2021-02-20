#include<bits/stdc++.h>
using namespace std;


int find_set(int a , vector<int>& parent){
    if(parent[a] == a)return a;

    return parent[a] = find_set(parent[a],parent);
}

void union_set(int a, int b, vector<int>& parent, vector<int>& size,int& cnt){
    a = find_set(a,parent);
    b = find_set(b,parent);

    if(a != b){
        cnt--;
        if(size[a] < size[b])
            swap(a,b);
        parent[b] = a;
        size[b]+=size[a];
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> vis(m,false);
    vector<pair<int,int>> edges;
    vector<int> parent(n);
    vector<int> size(n,1);
    iota(parent.begin(),parent.end(),0);
    for(int i = 0 ; i < m ; i++){
        int x,y;
        cin >> x >> y;
        edges.push_back({x-1,y-1});
    }
    int k;
    cin >> k;
    vector<int> stuff;
    for(int i = 0 ; i < k ; i++){
        int x;
        cin >> x;
        stuff.push_back(x-1);
        vis[x-1] = true;
    }
    int cnt = n;
    for(int i = 0 ; i < m ; i++){
        if(!vis[i]){
            union_set(edges[i].first,edges[i].second,parent,size,cnt);
        }
    }
    vector<int> ans;
    for(int i = stuff.size()-1 ; i >= 0 ; i--){
        
        if(vis[stuff[i]]){
            ans.push_back(cnt);
            union_set(edges[stuff[i]].first,edges[stuff[i]].second,parent,size,cnt);
        }   
    }
    for(int i = ans.size() - 1 ; i >= 0 ; i--){
        cout << ans[i] << " ";
    }


}