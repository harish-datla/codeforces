#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
while(n--){
 string s;
 cin >> s;
 if(s.size() <= 2){
     cout << s << endl;
 }
 else
 {
     string out = "";
     out+=s[0];
     for(int i = 1  ;i < s.size()-1 ; i+=2){
         out+=s[i];
     }
     out+=s[s.size() - 1];
     cout << out << endl;
 }   

}
}