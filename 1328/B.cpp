#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<char> ans(n,'a');
        for(int i = n - 2 ; i >= 0 ; i--){
                if(k <= -i + (n - 1)){
                        ans[i] = 'b';
                        ans[n-k] = 'b';
                        break;

                }
                k = k - (-i+(n-1));
        }
        for(int i = 0 ; i < n ; i++){
                cout << ans[i];
        }
        cout << endl;
    }
}