#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
     string s;
     cin >> s;
     int n;
     cin >> n;
     vector<int> a(n,0);
     for(int i = 0 ; i < n ; i++){
         cin >> a[i];
     }
     string str = "";
     sort(s.begin(),s.end());
     str = s.substr(0,n);
     vector<char> ans(a.size(),'x');
     


     int p = 0;
     int x = a.size()-1;
     vector<vector<int>> group;
     while(p < a.size()){
         vector<int> pos;
         for(int i = 0 ; i < a.size() ; i++){
         if(a[i] == 0){
             pos.push_back(i);
             x--;
             p++;
             a[i] = -1;

         }
     }
    group.push_back(pos);
    for(int i = 0 ; i < a.size() ; i++){
        for(int j = 0 ; j < pos.size() ; j++){
         a[i]-=abs(pos[j] - i);  
        }
    }

     }
     map<char,int> mp;
     for(int i = 0 ; i < s.size() ; i++){
         mp[s[i]]++;
     }
     auto j = mp.rbegin();
     for(int i = 0 ; i < group.size() ; i++){
         while(j->second < group[i].size()){
             j++;
         }
             for(int k = 0 ; k < group[i].size() ; k++){
              ans[group[i][k]] = j->first;
             }
         j++;
     }

     string out = "";
     //cout << a.size() << endl;
     for(int i = 0 ; i < a.size() ; i++){
         out+=ans[i];
         //cout << ans[i] ;
     }
     cout << out << endl;
	// cout << endl;

    }

}


