#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int b;
    vector<bool> a(n + 1, false);
    int x;
    cin >> x;
    while (x--)
    {
        cin >> b;
        a[b] = true;
    }
    cin >> x;
    while (x--)
    {
        cin >> b;
        a[b] = true;
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (!a[i])
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
}