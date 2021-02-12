#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
     int a,b;
     cin >> a >> b;
     vector<string> str;
     for(int i = 0 ; i < a ; i++){
         string s;
         cin >> s;
         str.push_back(s);
     }
     string model = str[str.size() - 1];
     str.pop_back();
     vector<string> possible_strings;
     possible_strings.push_back(model);
     string temp = model;
     for(int i = 0 ; i < temp.size() ; i++){
            char ref = temp[i];
            for(int j = 0 ; j < 26 ; j++){
              if(ref != 'a' + j){
                  temp[i] = 'a'+j;
                  possible_strings.push_back(temp);
              }   
            }
            temp = model;
     }
    bool flag = false;
     for(int i = 0 ; i < possible_strings.size() ; i++){
         flag = false;
         for(int j = 0 ; j < str.size() ; j++){
             int x = 0;
             for(int k = 0 ; k < str[j].size() ; k++){
                 x+=(str[j][k] == possible_strings[i][k] ? 0 : 1);
             }
             if(x>1){
                 flag = true;
                 break;
                
             }
         }
         if(!flag){
             cout << possible_strings[i] << endl;
             break;
         }
         
     }
     if(flag){
      cout << -1 << endl;   
     }


     
    }
}