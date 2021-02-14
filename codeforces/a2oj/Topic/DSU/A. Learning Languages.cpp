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
    vector<vector<int>> l(m + 1);
    vector<int> par(n);
    vector<int> size(n, 1);
    iota(par.begin(), par.end(), 0);
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 0)
        {
            flag = true;
        }

        while (x--)
        {
            int y;
            cin >> y;
            l[y].push_back(i);
        }
    }

    for (int i = 1; i <= m; i++)
    {
        if (l[i].size() > 1)
        {
            for (int j = 0; j < l[i].size() - 1; j++)
            {
                union_set(l[i][j], l[i][j + 1], par, size);
            }
        }
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(find_set(i, par));
    }

    flag ? cout << s.size() - 1 << endl : cout << s.size() << endl;
}
