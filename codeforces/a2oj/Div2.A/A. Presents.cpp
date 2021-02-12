#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> in(n, 0);
    vector<int> out(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> in[i];
        out[in[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << out[i] << " ";
    }
    cout << endl;
}