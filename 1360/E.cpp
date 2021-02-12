#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
     int n;
     cin >> n;
     vector<vector<int>> a(n,vector<int>(n,0));
     for(int i = 0 ; i < n ; i++){
         for(int j = 0 ; j < n ; j++){
             char c;
             cin >> c;
             a[i][j] = c - '0';
            //  cout << a[i][j];
         }
        //  cout << endl;
     }
     //for(int i = 0 ; i < n ; i++){
     //    for(int j = 0 ; j < n ; j++){
     //        cout << a[i][j];
     //    }
     //    cout << endl;
     //}
     bool flag = true;
     for(int i = 0 ; i < n -1 ; i++){
         for(int j = 0 ; j < n-1 ; j++){
             if(a[i][j] == 1 && a[i+1][j] == 0 && a[i][j+1] == 0){
                 flag = false;
                 break;
             }
         }
         if(!flag){
          break;   
         }
     }
     if(flag){
         cout << "YES" << endl;
     }
     else
     {
         cout << "NO" << endl;
     }

    }
}