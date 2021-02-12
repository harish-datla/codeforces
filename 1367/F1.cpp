// By smurf, contest: Codeforces Round #650 (Div. 3), problem: (F1) Flying Sort (Easy Version), Accepted, #, Copy
//raja1999
 
//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")
 
#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <string> 
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip> 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
//setbase - cout << setbase (16)a; cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 <<endl;prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
//cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val
 
using namespace std;
using namespace __gnu_pbds;
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define int ll
 
typedef tree<
int,
null_type,
less<int>,
rb_tree_tag,
tree_order_statistics_node_update>
ordered_set;
 
 
//std::ios::sync_with_stdio(false);
 
int a[3005],ans[3005];
map<int,int>previi;
int b[30005];
main(){
	std::ios::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,res=0,i,j;
		cin>>n;
		previi.clear();
		rep(i,n){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		previi[b[0]]=-1;
		rep(i,n){
			if(i!=0)
				previi[b[i]]=b[i-1];
		}
		rep(i,n){
			ans[i]=1;
			rep(j,i){
				if(a[j]==previi[a[i]]){
					ans[i]=max(ans[i],ans[j]+1);
                    break;
				}
			}
			res=max(res,ans[i]);
		}
		cout<<n-res<<endl;
	}
	return 0;
} 