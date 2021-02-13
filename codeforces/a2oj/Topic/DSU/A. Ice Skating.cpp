#include <bits/stdc++.h>
using namespace std;

int find_set(int v, vector<int> &p)
{
    if (v == p[v])
    {
        return v;
    }
    return p[v] = find_set(p[v], p);
}

void union_set(int a, int b, vector<int> &p)
{
    a = find_set(a, p);
    b = find_set(b, p);
    if (a != b)
    {
        p[a] = b;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> p(n, 0);
    vector<vector<int>> x(1001);
    vector<vector<int>> y(1001);
    iota(p.begin(), p.end(), 0);
    for (int i = 0; i < n; i++)
    {
        int x1, y1;
        cin >> x1 >> y1;
        x[x1].push_back(i);
        y[y1].push_back(i);
    }

    for (int i = 1; i <= 1000; i++)
    {
        if (x[i].size() > 1)
        {
            for (int j = 0; j < x[i].size() - 1; j++)
            {
                union_set(x[i][j], x[i][j + 1], p);
            }
        }
        if (y[i].size() > 1)
        {
            for (int j = 0; j < y[i].size() - 1; j++)
            {
                union_set(y[i][j], y[i][j + 1], p);
            }
        }
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(find_set(i, p));
    }
    cout << s.size() - 1 << endl;
}