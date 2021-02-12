#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0){
            for(int i = n ; i >= 1 ; i--){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            cout << n/2 + 1 << " ";
            for(int i = n ; i >= 1 ; i--){
                if(i != n/2 + 1){
                    cout << i << " ";
                }
            }
            cout << endl;

        }

    }   
}