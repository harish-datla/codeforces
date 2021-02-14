#include <bits/stdc++.h>
using namespace std;

int find_set(int v, vector<int> &par)
{
    if (v == par[v])
        return v;
    return par[v] = find_set(par[v], par);
}

void union_set(int c, int p, vector<int> &par, vector<int> &size)
{
    c = find_set(c, par);
    p = find_set(p, par);
    if (c != p)
    {
        if (size[p] < size[c])
            swap(p, c);
        par[c] = p;
        size[p] += size[c];
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> par(n, 0);
    vector<int> size(n, 1);
    iota(par.begin(), par.end(), 0);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        union_set(x, y, par, size);
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(find_set(i, par));
    }
    long long ans = 1;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        ans *= pow(2, size[*it]-1);
    }
    cout << ans << endl;
}