#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n,0);
        int sum = 0;
        int one = 0;
        int two = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            sum+=a[i];
            two+=(a[i]/2);
            one+=(a[i]%2);

        }
        if(n == 1){
            cout << "NO" << endl;
            continue;
        }
        if(sum%2){
            cout << "NO" << endl;
            continue;
        }else
        {
            if(one == 0 && two%2 == 1){
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
        }
        
        
    }
}