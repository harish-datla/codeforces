#include <bits/stdc++.h>
using namespace std;

vector<string> get_path(string s, map<string, vector<string>> &mp)
{
    vector<string> ans;
    ans.push_back(s);
    //cout << s << endl;
    string start = s;
    string next = mp[s][0];
    if (mp[next].size() == 1)
    {
        ans.push_back(next);
        return ans;
    }
    while (true)
    {
        if (start != mp[next][0])
        {
            start = next;
            next = mp[next][0];
        }
        else
        {
            start = next;
            next = mp[next][1];
        }
        if (mp[next].size() == 1)
        {
            break;
        }
        // cout << "hi" << endl;
    }
    ans.push_back(next);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    set<string> s;
    map<string, vector<string>> mp;
    for (int i = 0; i < n; i++)
    {
        string x, y;
        cin >> x >> y;
        mp[x].push_back(y);
        mp[y].push_back(x);
        s.insert(x);
        //s.insert(y);
    }
    //cout << "Hi" << endl;
    vector<vector<string>> ans;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (mp[*it].size() == 1)
        {
            vector<string> path = get_path(*it, mp);
            ans.push_back(path);
        }
    }
    //cout << "HI" << endl;
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
}