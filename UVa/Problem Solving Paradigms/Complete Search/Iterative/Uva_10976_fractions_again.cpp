#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    while(cin >> n){
        vector<pair<int,int>> ans;
        for(int i = n+1 ; i <= 2*n ; i++){
            if((i*n)%(i-n) == 0){
                ans.push_back({ (i*n)/(i-n),i});
            }
        }
        cout << ans.size() << endl;
        for(int i = 0 ; i < ans.size() ; i++){ 
            cout << "1/" << n << " = 1/" << ans[i].first << " + 1/" << ans[i].second << endl;
        }
    }
}