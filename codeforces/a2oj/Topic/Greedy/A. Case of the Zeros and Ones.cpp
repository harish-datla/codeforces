#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string temp;
    for (int i = 0; i < s.size(); i++){
        if (temp.size() >= 1 && temp[temp.size() - 1] != s[i]){
            temp.pop_back();
        }
        else{
            temp.push_back(s[i]);
        }
    }

    cout << temp.size() << endl;
}