#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n,0);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }

        for(int i = 1 ; i < n ; i++){
            if(a[i] - a[i-1] < 0 && !(i%2)){
                if(abs(a[i]) >= abs(a[i-1])){
                    a[i] = -a[i];
                }
                else{
                    a[i-1] = -a[i-1];
                }
            }
            else if(a[i] - a[i-1] > 0 && i%2){
                if(abs(a[i]) >= abs(a[i-1])){
                    a[i] = -a[i];
                }
                else{
                    a[i-1] = -a[i-1];
                }
            }
        }

        for(int i = 0 ; i < n ; i++){
            cout << a[i] << " ";
        }

    }
}
