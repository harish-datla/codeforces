#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n+1,0);
    vector<int> b(n+1,0);
    vector<int> c(n+1,0);
    vector<int> d(n+1,0);
    int p = 0;
    for(int i= 1 ; i < n ; i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 1 ; i <= n ; i++){
        cin >> c[i];
    }

    for(int i = 1 ; i < n ; i++){
        if(c[a[i]] != c[b[i]]){
            p++;d[a[i]]++;d[b[i]]++;
        }
    }

    for(int i = 1 ; i <= n ; i++){
        if(d[i] == p){
            cout << "YES" << endl;
            cout << i  << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;

}