#include <bits/stdc++.h>
using namespace std;

int find_set(int v, vector<int> &par)
{
    if (par[v] == v)
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
        size[p] += c;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> par(n + 1, 0);
    iota(par.begin(), par.end(), 0);
    vector<int> size(m, 1);
    vector<int> ans(n, 0);
    for (int i = 0; i < m; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        l--;
        r--;
        x--;
        int cur = find_set(l, par);
        while (cur <= r)
        {
            if (cur == x)
            {
                cur = cur + 1;
            }
            else
            {
                ans[cur] = x + 1;
                par[cur] = cur + 1;
            }
            cur = find_set(cur, par);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}