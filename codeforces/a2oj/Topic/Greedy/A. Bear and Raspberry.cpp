#include<bits/stdc++.h>
using namespace std;


int main(){
    int n , c;
    cin >> n >> c;
    int x = 0;
    int y = 0;
    cin >> x ;
    int maxi = 0; 
    for(int i = 0 ; i < n-1 ; i++){
        cin >> y;
        if(x - y > maxi){
            maxi = x- y;
        }
        x = y;
    }
    maxi - c > 0  ? cout <<  maxi -c << endl : cout << 0 << endl; 
}