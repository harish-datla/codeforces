#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
        vector<int> a(n,0);
        vector<int> b(n,0);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        for(int i = 0 ; i < n ; i++){
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int x = b.size() - 1;
        int y = 0;
        for(int j = 0 ; j < k ; j++){
            if(a[y] < b[x]){
              
                swap(a[y],b[x]);
                  x--;
                  y++;
            }
            else
            {
                break;
            }
        }
        int sum = 0;
        for(int i = 0 ; i < a.size() ; i++){
        	// cout << a[i] << endl;
        sum+=a[i];	
        }
        cout << sum << endl;
        
 
	}
 
}