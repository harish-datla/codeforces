#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k ;
    for(int i = 0 ; i < n - k  ; i++)
        cout << i+1 << " ";
    int last = n-k;
    bool sign = true;
    int t = 0;
    for(int i = 0 ; i < k ; i++){
        if(sign){
            cout << n - t << " ";
            t++;
            sign = false;
        }else{
            cout << last + 1 << " ";
            last++;
            sign = true;
        }
    }
   
}