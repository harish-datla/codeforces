#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    bool flag = false;
    while(cin >> n , n){
        vector<int> s(n,0);
        for(int i = 0 ; i < n ; i++){
            cin >> s[i];
        }
        if(!flag){
            flag = true;
        }else{
            cout << endl;
        }
        for(int i = 0 ; i < n - 5 ; i ++ )
            for(int j = i+1 ; j < n - 4 ; j ++ )
                for(int k= j+1 ; k < n - 3 ; k ++ )
                    for(int l = k+1 ; l < n - 2 ; l ++ )
                        for(int m = l+1 ; m < n - 1 ; m ++ )
                            for(int p = m+1 ; p < n  ; p ++ )
                                cout << s[i] << " " << s[j] << " " << s[k] << " " << s[l] << " " << s[m] << " " << s[p] << endl;

    }
}