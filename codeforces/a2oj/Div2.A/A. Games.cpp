#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> color(101, 0);
    vector<int> colorb(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        color[a] += 1;
        colorb[i] = b;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {

        ans += color[colorb[i]];
    }

    cout << ans << endl;
}