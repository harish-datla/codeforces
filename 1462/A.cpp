#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    
    int n;
    cin >> n;
    int i = 0;
    int j = n - 1;
    vector<int> a(n,0);
    for(int p = 0 ; p < n ; p++){
        cin >> a[p];
    }
    while(i <= j){
        if(i < j){
            cout << a[i] << " " << a[j] << " ";
        }
        else if(i == j){ 
            cout << a[i];
        }
        i++;
        j--;
    }
        cout << endl;
    }

}