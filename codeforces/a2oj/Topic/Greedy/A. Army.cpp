#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n,0);
    for(int i = 1 ; i < n ; i++){
        int x;
        cin >> x;
        a[i] = a[i-1]+x;
    } 
    int x , y;
    cin >> x >> y;
    cout << a[y-1] - a[x-1] << endl;
}