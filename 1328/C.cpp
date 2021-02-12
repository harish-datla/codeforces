#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s;
        cin >> s;
        string xo;
        cin >> xo;
        string a;
        string b;
        bool flag = false;
        for(int i = 0 ; i < s ; i++){
                if(!flag && xo[i] - '0' == 2){
                        a+='1';
                        b+='1';
                }
                else if(!flag && xo[i] - '0' == 0){
                        a+='0';
                        b+='0';
                }
                else if(flag && xo[i] - '0' == 2){
                        a+='0';
                        b+='2';
                }
                else if(flag && xo[i] - '0' == 0){
                        a+='0';
                        b+='0';
                }
                else if(flag && xo[i] - '0' == 1){
                        a+='0';
                        b+='1';
                }
                else if(!flag && xo[i] - '0' == 1){
                        a+='1';
                        b+='0';
                        flag = true;
                }
        }
        cout << a << endl;
        cout << b << endl;
    }
}