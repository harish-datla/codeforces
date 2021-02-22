#include<bits/stdc++.h>

using namespace std;

int main(){
       int t;
       cin >> t;
       while(t--){
           int x;
           cin >> x;
           vector<pair<string,pair<int,int>>> cars;
           while(x--){
               string p;
               int i,j;
               cin >> p >> i >> j;
               cars.push_back({p,{i,j}});
           }
           int q;
           cin >> q;
           while(q--){
               int y;
               cin >> y;
               vector<string> ans;
               for(int i = 0 ; i < cars.size() ; i++){
                   if(cars[i].second.first <= y && y <= cars[i].second.second){
                       ans.push_back(cars[i].first);
                   }
               }
               if(ans.size() == 1){
                    cout << ans[0] << endl;
               }else{
                    cout << "UNDETERMINED" << endl;
               }
           }
           if(t!=0){
           cout << endl;
           }
       }

}