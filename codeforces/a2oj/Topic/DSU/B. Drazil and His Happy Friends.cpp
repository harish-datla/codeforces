#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> boys(n, 0);
    vector<int> girls(m, 0);
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        boys[y] = 1;
    }
    int y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int x;
        cin >> x;
        girls[x] = 1;
    }
    for (int i = 0; i <2*m*n+1; i++)
    {
        if (boys[i % n] == 1 || girls[i % m] == 1)
        {
            boys[i % n] = 1;
            girls[i % m] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (boys[i] != 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (girls[i] != 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}