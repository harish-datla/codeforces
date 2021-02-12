#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;
    int ab = 0;
    int ba = 0;
    int both = 0;
    if(s.size() < 4){
        cout << "NO" << endl;
        return 0;
    }
    for(int i = 0 ; i < s.size()-1 ; i++){
        if(s[i] == 'A' && s[i+1] == 'B'){
            if(i +2 < s.size() && s[i+2] == 'A'){
                both++;
                i+=2;
            }else
            {
                ab++;
                i+=1;
            }
        }
        else if(s[i] == 'B' && s[i+1] == 'A'){
             if( i +2 < s.size() && s[i+2] == 'B'){
                both++;
                 i+=2;
            }else
            {
                ba++;
                 i+=1;
            }
        }
    }
    // cout << ab << " " << ba << " " << both << endl;
    if((ab > 0 && ba > 0) || (ab > 0 && both > 0) ||( ba > 0 && both > 0) || both > 1){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}