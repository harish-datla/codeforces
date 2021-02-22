#include<bits/stdc++.h>
using namespace std;


int main(){
   int t;
   cin >> t;
   while(t--)
   {
       int a,b,c;
       cin >> a >> b >> c;
       bool flag = false;
       for(int x = -22 ; x <= 22 ; x++){
           for(int y = -100 ; y <= 100 ; y++){
               for(int z = -100 ; z <= 100 ; z++){
                   if(x != y && y != z && z != x){
                       if(x + y + z == a && x*y*z == b && x*x+y*y+z*z == c){
                           flag = true;
                           cout << x << " " << y << " " << z << endl;
                           break;
                       }
                   }
               }
               if(flag){
                   break;
               }
           }
           if(flag){
               break;
           }
       }
       if(!flag){
           cout << "No solution." << endl;
       }
   } 
}
