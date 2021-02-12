#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n,0);
        int i = 0 ;
        while(i < n){
            cin >> a[i];
            i++;
        }
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        sort(a.begin(),a.end());
        bool flag = true;
        for(int i = 0 ; i < a.size() - 1 ; i++){
            if(a[i+1] - a[i] > 1){
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if(flag){
        cout << "YES" << endl;
        }
    }
}