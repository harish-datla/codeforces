#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    int target = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        target += a[i];
        if (target > sum / 2)
        {
            cout << n - i << endl;
            return 0;
        }
    }
    return 0;
}